require 'lubyk'
math.randomseed(os.time())

local win = mimas.LegacyGLWindow()

--=============================================== DEBUG DRAWING
local drawer 
local mouse = {x = -10, y = 10}

if true then
  -- Use C++ OpenGL debug drawer (much faster !).
  drawer = bt.GLDebugDrawer()
  drawer:setDebugMode(
		bt.IDebugDraw.DBG_DrawWireframe +
		--bt.IDebugDraw.DBG_DrawAabb +
		--bt.IDebugDraw.DBG_DrawFeaturesText +
		--bt.IDebugDraw.DBG_DrawContactPoints +
		--bt.IDebugDraw.DBG_NoDeactivation +
		--bt.IDebugDraw.DBG_NoHelpText +
		--bt.IDebugDraw.DBG_DrawText +
		--bt.IDebugDraw.DBG_ProfileTimings +
		--bt.IDebugDraw.DBG_EnableSatComparison +
		--bt.IDebugDraw.DBG_DisableBulletLCP +
		--bt.IDebugDraw.DBG_EnableCCD +
		bt.IDebugDraw.DBG_DrawConstraints +
		bt.IDebugDraw.DBG_DrawConstraintLimits +
    0
  )
else
  -- Define our own Lua based debug drawer.
  drawer = bt.DebugDrawer()
  function drawer:drawLine(from, to, fromColor, toColor)
    toColor = toColor or fromColor
    gl.Begin('LINES')
      gl.Color(fromColor:getX(), fromColor:getY(), fromColor:getZ())
      gl.Vertex(from:getX(), from:getY(), from:getZ())
      gl.Color(toColor:getX(), toColor:getY(), toColor:getZ())
      gl.Vertex(to:getX(), to:getY(), to:getZ())
    gl.End()
  end
end

--=============================================== WORLD SETUP
local broadphase = bt.DbvtBroadphase()
local collisionConfiguration = bt.DefaultCollisionConfiguration()
local dispatcher = bt.CollisionDispatcher(collisionConfiguration)
local solver = bt.SequentialImpulseConstraintSolver()
local dynamicsWorld = bt.DiscreteDynamicsWorld(dispatcher,broadphase,solver,collisionConfiguration)

dynamicsWorld:setGravity(bt.Vector3(0,-10,0))
dynamicsWorld:setDebugDrawer(drawer)


local groundShape = bt.StaticPlaneShape(bt.Vector3(0,1,0),1)
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
groundRigidBodyCI.m_restitution = 1.0

local groundRigidBody = bt.RigidBody(groundRigidBodyCI)
dynamicsWorld:addRigidBody(groundRigidBody)

--=============================================== SHAPES
local snake = {}
local SNAKE_SIZE = 4
local MAX_BODIES = 8
local BALL_MARGIN = 0.3 -- Margin + ball = 1.0
local ELEM_SIZE = SNAKE_SIZE / MAX_BODIES
local BALL_RADIUS = 0.8 * ELEM_SIZE * (1 - BALL_MARGIN)

local elem
local ORIGIN_X = 0
local ORIGIN_Y = SNAKE_SIZE * 1.5
local ORIGIN_Z = 0

--=============================================== Compute inertia
local MASS = 1
local INERTIA = bt.Vector3(0,0,0)
local ELEM_SHAPE = bt.SphereShape(BALL_RADIUS)
ELEM_SHAPE:calculateLocalInertia(MASS, INERTIA)

local DIAG_SN = (SNAKE_SIZE / 2) / math.sqrt(2)
local x = ORIGIN_X - DIAG_SN
local y = ORIGIN_Y - DIAG_SN

local DIAG_STEP = 1.3 * ELEM_SIZE / math.sqrt(2)
-- snake: BALL ----- + ----- BALL -- + -- BALL
--         forw ---->|<---- back
local back = bt.Vector3(-DIAG_STEP/2, -DIAG_STEP/2, 0)
local forw = bt.Vector3(DIAG_STEP/2, DIAG_STEP/2, 0)
local NoRotation = bt.Quaternion(0,0,0,1)

for i=1,MAX_BODIES do
  local prev = elem
  elem = {shape = ELEM_SHAPE}
  elem.motion = bt.DefaultMotionState(bt.Transform(NoRotation, bt.Vector3(x, y, 2 * math.random())))

  local ci = bt.RigidBody.RigidBodyConstructionInfo(
    MASS,
    elem.motion,
    ELEM_SHAPE,
    INERTIA
  )
  elem.ci = ci
  ci.m_restitution = 0.5
  ci.m_linearDamping = 0.2

  elem.body = bt.RigidBody(elem.ci)
  dynamicsWorld:addRigidBody(elem.body)
  table.insert(snake, elem)

  if prev then
    -- Create constraint
    elem.constraint = bt.Point2PointConstraint(prev.body, elem.body, forw, back)
  else
    -- Add a hinge constraint on the wall
    elem.constraint = bt.HingeConstraint(
      elem.body,
      -- point in A
      bt.Vector3(- DIAG_STEP, - DIAG_STEP, 0),
      -- around Z axis
      bt.Vector3(0, 0, 1)
    )
    -- Add angular velocity
    elem.constraint:enableAngularMotor(
      true,
      1,
      100
    )

  end
  dynamicsWorld:addConstraint(elem.constraint)


  x = x + DIAG_STEP
  y = y + DIAG_STEP
end

--=============================================== OpenGL Window setup
--function win:click(x, y, op)
--  if op == mimas.MousePress then
--    for i, fallRigidBody in ipairs(bodies) do
--      fallRigidBody:translate(bt.Vector3(math.random(), 7 * math.random(), math.random()))
--    end
--  end
--end

function win:mouse(x, y)
  mouse.x = x
  mouse.y = y
end

function win:paintGL()
  gl.Clear( "COLOR_BUFFER_BIT, DEPTH_BUFFER_BIT")
  gl.MatrixMode("MODELVIEW")
  gl.LoadIdentity()
  
  
  gl.Translate(0.0, 0.0, -20.0)
  gl.Rotate(mouse.x, 0.0, 1.0, 0.0)
  gl.Rotate(mouse.y, 1.0, 0.0, 0.0)
  

  gl.Color(0.5,0.5,0.0,0.5)
  glut.WireCube(10)


  dynamicsWorld:debugDrawWorld()
  local trans = bt.Transform()
  for _, elem in ipairs(snake) do
    elem.motion:getWorldTransform(trans)
    local pos = trans:getOrigin()
    gl.PushMatrix()
    gl.Translate(pos:x(), pos:y(), pos:z())
    gl.Color(0.4,0.2,0.4,0.3)
    glut.SolidSphere(BALL_RADIUS, 100, 10)
    gl.PopMatrix()
  end

  win:update()
end
win:move(800, 10)
win:resize(900,900)
win:show()

--=============================================== Simulation
local step = 1/60
timer = lk.Timer(step * 1000, function()
  dynamicsWorld:stepSimulation(step,10)
  win:update()
end)
timer:start()

run()
