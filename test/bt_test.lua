--[[------------------------------------------------------

  test the dummy module
  ---------------------

  The Dummy module does nothing and is just used as a way
  to make sure the build process is ok.

--]]------------------------------------------------------
require 'lubyk'

local should = test.Suite('bt')

function should.autoload()
  assertType('table', bt)
end

function should.work(t)
  local win = mimas.LegacyGLWindow()

  local drawer = bt.GLDebugDrawer()
  drawer:setDebugMode(bt.IDebugDraw.DBG_MAX_DEBUG_DRAW_MODE)
  lk.log(bt.IDebugDraw.DBG_MAX_DEBUG_DRAW_MODE)

  local broadphase = bt.DbvtBroadphase()
  local collisionConfiguration = bt.DefaultCollisionConfiguration()
  local dispatcher = bt.CollisionDispatcher(collisionConfiguration)
  local solver = bt.SequentialImpulseConstraintSolver()
  local dynamicsWorld = bt.DiscreteDynamicsWorld(dispatcher,broadphase,solver,collisionConfiguration)

  dynamicsWorld:setGravity(bt.Vector3(0,-10,0))
  dynamicsWorld:setDebugDrawer(drawer)

  local groundShape = bt.StaticPlaneShape(bt.Vector3(0,1,0),1)
  local fallShape = bt.SphereShape(0.3)
  local groundMotionState = bt.DefaultMotionState(
    bt.Transform(
      bt.Quaternion(0,0,0,1),
      bt.Vector3(0,-1,0)
    )
  )

  local groundRigidBodyCI = bt.RigidBody.RigidBodyConstructionInfo(
    0,
    groundMotionState,
    groundShape,
    bt.Vector3(0,0,0)
  )
  local groundRigidBody = bt.RigidBody(groundRigidBodyCI)
  dynamicsWorld:addRigidBody(groundRigidBody)

  local fallMotionState = bt.MotionState()
  function fallMotionState:getWorldTransform(worldTrans)
    -- Called to get initial ball position
    worldTrans:setRotation(bt.Quaternion(0,0,0,1))
    worldTrans:setOrigin(bt.Vector3(0,3,0))
  end

  function fallMotionState:setWorldTransform(worldTrans)
    -- Called when the ball position changes
    --print('sphere height:', worldTrans:getOrigin():getY())
  end

  local mass = 1
  local fallInertia = bt.Vector3(0,0,0)
  fallShape:calculateLocalInertia(mass,fallInertia)
  local fallRigidBodyCI = bt.RigidBody.RigidBodyConstructionInfo(
    mass,
    fallMotionState,
    fallShape,
    fallInertia
  )

  local fallRigidBody = bt.RigidBody(fallRigidBodyCI)
  dynamicsWorld:addRigidBody(fallRigidBody)
  
  function win:click()
    fallRigidBody:translate(bt.Vector3(0, 3, 0))
  end

  function win:initializeGL()
    gl.Enable("POINT_SMOOTH")
    gl.Enable("SMOOTH")
    gl.Enable("BLEND")                                -- Enable alpha blending
    gl.BlendFunc("SRC_ALPHA", "ONE_MINUS_SRC_ALPHA")  -- Set blend function

    gl.ClearDepth(1.0)
    gl.DepthFunc("LEQUAL");

    -- gl.Enable('GL_CULL_FACE')
    -- gl.Enable('GL_DEPTH_TEST')

    gl.Hint("PERSPECTIVE_CORRECTION_HINT", "NICEST") -- Really nice perspective
    gl.ClearColor(0.2,0.2,0.2,0.5)     

    if true then
      return
    end

    light_ambient   = { 0.2, 0.2, 0.2, 1.0 }
    light_diffuse   = { 1.0, 1.0, 1.0, 1.0 }
    light_specular  = { 1.0, 1.0, 1.0, 1.0 }
    -- light_position is NOT default value
    light_position0 = { 1.0, 10.0, 1.0, 0.0 }
    light_position1 = { -1.0, -10.0, -1.0, 0.0}

    gl.Light('LIGHT0', 'AMBIENT', light_ambient)
    gl.Light('LIGHT0', 'DIFFUSE', light_diffuse)
    gl.Light('LIGHT0', 'SPECULAR', light_specular)
    gl.Light('LIGHT0', 'POSITION', light_position0)

    gl.Light('LIGHT1', 'AMBIENT', light_ambient)
    gl.Light('LIGHT1', 'DIFFUSE', light_diffuse)
    gl.Light('LIGHT1', 'SPECULAR', light_specular)
    gl.Light('LIGHT1', 'POSITION', light_position1)

    gl.Enable('LIGHTING')
    gl.Enable('LIGHT0')
    gl.Enable('LIGHT1')


    gl.ShadeModel('SMOOTH')
    gl.Enable('DEPTH_TEST')
    gl.DepthFunc('LESS')

    gl.ClearColor(0.7, 0.7, 0.7, 0)
  end

  function win:resizeGL(w, h)
    gl.Enable("BLEND")
    --gl.Disable("DEPTH_TEST")
    gl.BlendFunc("SRC_ALPHA", "ONE_MINUS_SRC_ALPHA")

    gl.Enable("LINE_SMOOTH")
    -- Select the projection matrix
    gl.MatrixMode("PROJECTION")
    -- reset
    gl.LoadIdentity()
    -- Calculate the aspect ratio of the view
    glu.Perspective(
      45,               -- Field of view angle
      w / h,            -- Aspect ration
      1,                -- zNear
      100               -- zFar
    )   
    if true then
      return
    end
    -- switch to projection mode
    gl.MatrixMode('PROJECTION')

    -- save previous matrix which contains the 
    -- settings for the perspective projection
    gl.PushMatrix()
    --  reset matrix
    gl.LoadIdentity()
    --  set a 2D orthographic projection
    glu.Ortho2D(0, w, 0, h)
    gl.MatrixMode('MODELVIEW')
    gl.LoadIdentity()

    --  invert the y axis, down is positive
    gl.Scale(1, -1, 1)
    --  mover the origin from the bottom left corner
    --  to the upper left corner
    gl.Translate(0, -h, 0)
  end

  function win:paintGL()
    gl.Clear( "COLOR_BUFFER_BIT, DEPTH_BUFFER_BIT")
    gl.MatrixMode("MODELVIEW")
    gl.LoadIdentity()
    
    
    gl.Translate(0.0, 0.0, -20.0)
    gl.Color(0.5,0.5,0.0,0.5)
    glut.SolidCube(2.6)
  
  
    dynamicsWorld:debugDrawWorld()
    win:update()
  end
  win:move(800, 10)
  win:resize(500,500)
  win:show()

  local step = 1/60
  for i = 0,300 do
    dynamicsWorld:stepSimulation(step,10)
    win:update()
    sleep(step * 1000)
  end

  dynamicsWorld:removeRigidBody(fallRigidBody)
  dynamicsWorld:removeRigidBody(groundRigidBody)


  t:timeout(function()
    return false
  end)
end

test.all()
