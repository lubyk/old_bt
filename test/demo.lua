require 'lubyk'
math.randomseed(os.time())

local MAX_BODIES = 700
local win = mimas.LegacyGLWindow()

local drawer, dynamicsWorld
local mouse = {x = -10, y = 10}


if true then
  -- Simple way to declare world and debug drawer
  dynamicsWorld = bt.World()
  drawer = dynamicsWorld:debugDrawer('LEGACY')
else
  if true then
    -- Use C++ OpenGL debug drawer (much faster !).
    drawer = bt.GLDebugDrawer()
    drawer:setDebugMode(bt.IDebugDraw.DBG_MAX_DEBUG_DRAW_MODE)
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
end

local fallShape = bt.SphereShape(0.3)
local fallMotionState = bt.MotionState()
function fallMotionState:getWorldTransform(worldTrans)
  -- Called to get initial ball position
  worldTrans:setRotation(bt.Quaternion(0,0,0,1))
  worldTrans:setOrigin(bt.Vector3(2 * math.random() - 1, 8 * math.random(), 2 * math.random() - 1))
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
fallRigidBodyCI.m_restitution = 0.5
fallRigidBodyCI.m_linearDamping = 0.2

local bodies = {_count = 0}
adder = lk.Timer(5, function()
  if bodies._count < MAX_BODIES then
    local fallRigidBody = bt.RigidBody(fallRigidBodyCI)
    dynamicsWorld:addRigidBody(fallRigidBody)
    table.insert(bodies, fallRigidBody)
    bodies._count = bodies._count + 1
  else
    adder:stop()
  end
end)
adder:start()

function win:click(x, y, op)
  if op == mimas.MousePress then
    for i, fallRigidBody in ipairs(bodies) do
      fallRigidBody:translate(bt.Vector3(math.random(), 7 * math.random(), math.random()))
    end
  end
end

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
end
win:move(800, 10)
win:resize(900,900)
win:show()

local step = 1/60
timer = lk.Timer(step * 1000, function()
  dynamicsWorld:stepSimulation(step,10)
  if not win:deleted() then
    win:update()
  end
end)
timer:start()

run()
