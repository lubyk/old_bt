--[[------------------------------------------------------

  Bullet Physics bindings generator
  ---------------------------------

  This uses the 'dub' tool and Doxygen to generate the
  bindings for Bullet Physics.

  Input:  headers in 'vendor/src'
  Output: cpp files in 'src'

--]]------------------------------------------------------
require 'lubyk'

local base = lk.scriptDir()
local bt_base = base .. '/src/vendor/bullet/src'

local ins = dub.Inspector {
  INPUT   = {
    -- bt_base .. '/BulletCollision/BroadphaseCollision',
    -- bt_base .. '/BulletCollision/CollisionDispatch',
    -- bt_base .. '/BulletCollision/CollisionShapes',
    -- bt_base .. '/BulletCollision/Gimpact',
    -- bt_base .. '/BulletCollision/NarrowPhaseCollision',
    --
    -- bt_base .. '/BulletDynamics/Character',
    -- bt_base .. '/BulletDynamics/ConstraintSolver',
    -- bt_base .. '/BulletDynamics/Dynamics',
    -- bt_base .. '/BulletDynamics/Vehicle',
    
    -- bt_base .. '/BulletSoftBody',
    -- bt_base .. '/LinearMath',

    base .. '/bind/BulletCollision/BroadphaseCollision',
    base .. '/bind/BulletCollision/CollisionDispatch',
    base .. '/bind/BulletCollision/CollisionShapes',
    base .. '/bind/BulletDynamics/ConstraintSolver',
    base .. '/bind/BulletDynamics/Dynamics',
    base .. '/bind/LinearMath',
  },
  PREDEFINED = '"SIMD_FORCE_INLINE=" "ATTRIBUTE_ALIGNED16(name)=name" "BT_DECLARE_ALIGNED_ALLOCATOR()="',
  ignore = {
    -- FIXME: Why cannot dub ignore classes here ?
  },
  -- html = true,
}

local binder = dub.LuaBinder()

-- Renamge btXyz classes to bt.Xyz
function binder:name(elem)
  local name = elem.name
  if name then
    name = string.match(name, '^bt(.+)') or name
  end
  return name
end

function binder:constName(name)
  name = string.match(name, '^bt_(.+)') or name
  return name
end

binder:bind(ins, {
  output_directory = base .. '/src/bind',
  custom_bindings  = base .. '/bind',
  -- Remove this part in headers
  -- LuaBinder 115
  header_base = {bt_base, base .. '/bind'},
  -- Execute all lua_open in a single go
  -- with luaopen_bt_vendor (creates bt_vendor.cpp).
  single_lib = 'bt',
  -- Other name so that we can first load bt.lua
  luaopen = 'bt_core',
  only = {
     -- BulletCollision/BroadphaseCollision:
    'btBroadphaseInterface',
    'btDbvtBroadphase',
    'btDispatcher',

    -- BulletCollision/CollisionDispatch:
    'btCollisionConfiguration',
    'btCollisionDispatcher',
    'btDefaultCollisionConfiguration',

    -- BulletCollision/CollisionShapes:
    'btCollisionShape',
    'btConcaveShape',
    'btConvexInternalShape',
    'btConvexShape',
    'btSphereShape',
    'btStaticPlaneShape',

    -- BulletDynamics/ConstraintSolver:
    'btConstraintSolver',
    'btSequentialImpulseConstraintSolver',

    -- BulletDynamics/Dynamics:
    'btDiscreteDynamicsWorld',
    'btDynamicsWorld',
    'btRigidBody',
    'btRigidBody::btRigidBodyConstructionInfo',
    
    -- LinearMath
    'btDefaultMotionState',
    'btMotionState',
    'btQuadWord',
    'btQuaternion',
    'btTransform',
    'btVector3',

  }
})



