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

function should.work()
  local broadphase = bt.DbvtBroadphase()
  local collisionConfiguration = bt.DefaultCollisionConfiguration()
  local dispatcher = bt.CollisionDispatcher(collisionConfiguration)
  local solver = bt.SequentialImpulseConstraintSolver()
  local dynamicsWorld = bt.DiscreteDynamicsWorld(dispatcher,broadphase,solver,collisionConfiguration)

  dynamicsWorld:setGravity(bt.Vector3(0,-10,0))

  local groundShape = bt.StaticPlaneShape(bt.Vector3(0,1,0),1)
  local fallShape = bt.SphereShape(1)
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
    worldTrans:setBasis(bt.Quaternion(0,0,0,1))
    worldTrans:setOrigin(bt.Vector3(0,50,0))
  end

  function fallMotionState:setWorldTransform(worldTrans)
    -- Called when the ball position changes
    print('sphere height:', worldTrans:getOrigin():getY())
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

  for i = 0,300 do
    dynamicsWorld:stepSimulation(1/60,10)
  end

  dynamicsWorld:removeRigidBody(fallRigidBody)
  dynamicsWorld:removeRigidBody(groundRigidBody)
end

test.all()
