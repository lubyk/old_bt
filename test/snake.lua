require 'lubyk'
math.randomseed(os.time())

local win = mimas.LegacyGLWindow()

--=============================================== DEBUG DRAWING
local drawer 

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
local SNAKE_SIZE = 8
local MAX_BODIES = 15
local ELEM_SIZE = SNAKE_SIZE / MAX_BODIES
local BALL_MARGIN = 0.4 -- Margin + ball = 1.0
local BALL_RADIUS = (ELEM_SIZE * (1 - BALL_MARGIN)) / 2

local elem
local ORIGIN_X = -SNAKE_SIZE
local ORIGIN_Y = 0
local ORIGIN_Z = 0

--=============================================== Compute inertia
local MASS = 1
local INERTIA = bt.Vector3(0,0,0)
local ELEM_SHAPE = bt.BoxShape(bt.Vector3(BALL_RADIUS, BALL_RADIUS, BALL_RADIUS))
ELEM_SHAPE:calculateLocalInertia(MASS, INERTIA)

local x = ORIGIN_X - (SNAKE_SIZE / 2)
local y = BALL_RADIUS
local z = ORIGIN_Z

-- snake: BALL ----- + ----- BALL -- + -- BALL
--         forw ---->|<---- back
local back = bt.Vector3(-ELEM_SIZE/2, 0, 0)
local forw = bt.Vector3(ELEM_SIZE/2, 0, 0)
local NoRotation = bt.Quaternion(0,0,0,1)
local UP_AXIS = bt.Vector3(0, 1, 0)

for i=1,MAX_BODIES do
  local prev = elem
  elem = {shape = ELEM_SHAPE}
  elem.motion = bt.DefaultMotionState(bt.Transform(NoRotation, bt.Vector3(x, y, z)))

  local ci = bt.RigidBody.RigidBodyConstructionInfo(
    MASS,
    elem.motion,
    ELEM_SHAPE,
    INERTIA
  )
  elem.ci = ci
  ci.m_restitution = 0.5
  ci.m_linearDamping = 0 --.2

  local body = bt.RigidBody(elem.ci)
  body:setActivationState(bt.DISABLE_DEACTIVATION)
  body:setAnisotropicFriction(bt.Vector3(0.05, 0, 2))
  body:setFriction(0.5)

  elem.body = body
  dynamicsWorld:addRigidBody(body)
  table.insert(snake, elem)

  if prev then
    -- Create constraint
    elem.constraint = bt.HingeConstraint(
      prev.body,
      elem.body,
      forw,
      back,
      UP_AXIS,
      UP_AXIS
    )
    dynamicsWorld:addConstraint(elem.constraint)
  end

  x = x + ELEM_SIZE
end

--=============================================== OpenGL Window setup
--function win:click(x, y, op)
--  if op == mimas.MousePress then
--    for i, fallRigidBody in ipairs(bodies) do
--      fallRigidBody:translate(bt.Vector3(math.random(), 7 * math.random(), math.random()))
--    end
--  end
--end

local mouse = {x = 383, y = 422, z = 10}
function win:mouse(x, y)
  mouse.x = x
  mouse.y = y
end

function win:paintGL()
  gl.Clear( "COLOR_BUFFER_BIT, DEPTH_BUFFER_BIT")
  gl.MatrixMode("MODELVIEW")
  gl.LoadIdentity()
  
  
  gl.Translate(0.0, 0.0, -30.0)
  gl.Rotate(mouse.x, 0.0, 1.0, 0.0)
  gl.Rotate(mouse.y, 1.0, 0.0, 0.0)
  gl.Rotate(mouse.z, 0.0, 0.0, 1.0)
  

  gl.Color(0.5,0.5,0.0,0.5)
  glut.WireCube(10)


  dynamicsWorld:debugDrawWorld()
  win:update()
end
win:move(800, 10)
win:resize(900,900)
win:show()

local PHASE_PER_ELEM = 2 * math.pi / MAX_BODIES
local ANGULAR_SPEED  = 2 * math.pi / 4
--=============================================== Motor oscillations
function updateMotors(snake, t)
  -- use low velocities during startup
  local damp = (1 - math.exp(-t/8))
  local phi = t * ANGULAR_SPEED
  for i, elem in ipairs(snake) do
    local constraint = elem.constraint
    local pos_damp = (MAX_BODIES-i)/(MAX_BODIES-1)
    pos_damp = 1 - (pos_damp * pos_damp * pos_damp)
    if constraint then
      -- sin oscillation
      constraint:enableAngularMotor(
        true,
        1 * math.cos(phi + i * PHASE_PER_ELEM) * damp * pos_damp,
        5
      )
    end
  end
end
--=============================================== Simulation
local step = 1/60
local t = 0
timer = lk.Timer(step * 1000, function()
  t = t + step
  updateMotors(snake, t)
  dynamicsWorld:stepSimulation(step, 10)
  win:update()
end)
timer:start()

run()
