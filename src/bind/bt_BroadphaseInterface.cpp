/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btBroadphaseInterface
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "BulletCollision/BroadphaseCollision/btBroadphaseInterface.h"


/** virtual btBroadphaseInterface::~btBroadphaseInterface()
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:54
 */
static int btBroadphaseInterface__btBroadphaseInterface(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "bt.BroadphaseInterface"));
    if (userdata->gc) {
      btBroadphaseInterface *self = (btBroadphaseInterface *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__gc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__gc: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btBroadphaseProxy* btBroadphaseInterface::createProxy(const btVector3 &aabbMin, const btVector3 &aabbMax, int shapeType, void *userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher *dispatcher, void *multiSapProxy)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:56
 */
static int btBroadphaseInterface_createProxy(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    int shapeType = dub_checkint(L, 4);
    void *userPtr = *((void **)dub_checksdata(L, 5, "void"));
    short int *collisionFilterGroup = *((short int **)dub_checksdata(L, 6, "short int"));
    short int *collisionFilterMask = *((short int **)dub_checksdata(L, 7, "short int"));
    btDispatcher *dispatcher = *((btDispatcher **)dub_checksdata(L, 8, "bt.Dispatcher"));
    void *multiSapProxy = *((void **)dub_checksdata(L, 9, "void"));
    btBroadphaseProxy *retval__ = self->createProxy(*aabbMin, *aabbMax, shapeType, userPtr, *collisionFilterGroup, *collisionFilterMask, dispatcher, multiSapProxy);
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "BroadphaseProxy", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "createProxy: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "createProxy: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::destroyProxy(btBroadphaseProxy *proxy, btDispatcher *dispatcher)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:57
 */
static int btBroadphaseInterface_destroyProxy(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btBroadphaseProxy *proxy = *((btBroadphaseProxy **)dub_checksdata(L, 2, "BroadphaseProxy"));
    btDispatcher *dispatcher = *((btDispatcher **)dub_checksdata(L, 3, "bt.Dispatcher"));
    self->destroyProxy(proxy, dispatcher);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "destroyProxy: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "destroyProxy: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::setAabb(btBroadphaseProxy *proxy, const btVector3 &aabbMin, const btVector3 &aabbMax, btDispatcher *dispatcher)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:58
 */
static int btBroadphaseInterface_setAabb(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btBroadphaseProxy *proxy = *((btBroadphaseProxy **)dub_checksdata(L, 2, "BroadphaseProxy"));
    btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 4, "bt.Vector3"));
    btDispatcher *dispatcher = *((btDispatcher **)dub_checksdata(L, 5, "bt.Dispatcher"));
    self->setAabb(proxy, *aabbMin, *aabbMax, dispatcher);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setAabb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setAabb: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::getAabb(btBroadphaseProxy *proxy, btVector3 &aabbMin, btVector3 &aabbMax) const =0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:59
 */
static int btBroadphaseInterface_getAabb(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btBroadphaseProxy *proxy = *((btBroadphaseProxy **)dub_checksdata(L, 2, "BroadphaseProxy"));
    btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 4, "bt.Vector3"));
    self->getAabb(proxy, *aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAabb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAabb: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::rayTest(const btVector3 &rayFrom, const btVector3 &rayTo, btBroadphaseRayCallback &rayCallback, const btVector3 &aabbMin=btVector3(0, 0, 0), const btVector3 &aabbMax=btVector3(0, 0, 0))=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:61
 */
static int btBroadphaseInterface_rayTest(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    int top__ = lua_gettop(L);
    if (top__ >= 6) {
      btVector3 *rayFrom = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
      btVector3 *rayTo = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
      btBroadphaseRayCallback *rayCallback = *((btBroadphaseRayCallback **)dub_checksdata(L, 4, "bt.BroadphaseRayCallback"));
      btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 5, "bt.Vector3"));
      btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 6, "bt.Vector3"));
      self->rayTest(*rayFrom, *rayTo, *rayCallback, *aabbMin, *aabbMax);
      return 0;
    } else if (top__ >= 5) {
      btVector3 *rayFrom = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
      btVector3 *rayTo = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
      btBroadphaseRayCallback *rayCallback = *((btBroadphaseRayCallback **)dub_checksdata(L, 4, "bt.BroadphaseRayCallback"));
      btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 5, "bt.Vector3"));
      self->rayTest(*rayFrom, *rayTo, *rayCallback, *aabbMin);
      return 0;
    } else {
      btVector3 *rayFrom = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
      btVector3 *rayTo = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
      btBroadphaseRayCallback *rayCallback = *((btBroadphaseRayCallback **)dub_checksdata(L, 4, "bt.BroadphaseRayCallback"));
      self->rayTest(*rayFrom, *rayTo, *rayCallback);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "rayTest: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "rayTest: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::aabbTest(const btVector3 &aabbMin, const btVector3 &aabbMax, btBroadphaseAabbCallback &callback)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:63
 */
static int btBroadphaseInterface_aabbTest(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btBroadphaseAabbCallback *callback = *((btBroadphaseAabbCallback **)dub_checksdata(L, 4, "bt.BroadphaseAabbCallback"));
    self->aabbTest(*aabbMin, *aabbMax, *callback);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "aabbTest: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "aabbTest: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::calculateOverlappingPairs(btDispatcher *dispatcher)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:66
 */
static int btBroadphaseInterface_calculateOverlappingPairs(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btDispatcher *dispatcher = *((btDispatcher **)dub_checksdata(L, 2, "bt.Dispatcher"));
    self->calculateOverlappingPairs(dispatcher);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateOverlappingPairs: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateOverlappingPairs: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btOverlappingPairCache* btBroadphaseInterface::getOverlappingPairCache()=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:68
 */
static int btBroadphaseInterface_getOverlappingPairCache(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btOverlappingPairCache *retval__ = self->getOverlappingPairCache();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "OverlappingPairCache", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getOverlappingPairCache: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getOverlappingPairCache: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::getBroadphaseAabb(btVector3 &aabbMin, btVector3 &aabbMax) const =0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:73
 */
static int btBroadphaseInterface_getBroadphaseAabb(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    self->getBroadphaseAabb(*aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getBroadphaseAabb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getBroadphaseAabb: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::resetPool(btDispatcher *dispatcher)
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:76
 */
static int btBroadphaseInterface_resetPool(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    btDispatcher *dispatcher = *((btDispatcher **)dub_checksdata(L, 2, "bt.Dispatcher"));
    self->resetPool(dispatcher);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "resetPool: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "resetPool: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btBroadphaseInterface::printStats()=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h:78
 */
static int btBroadphaseInterface_printStats(lua_State *L) {
  try {
    btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata(L, 1, "bt.BroadphaseInterface"));
    self->printStats();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "printStats: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "printStats: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int btBroadphaseInterface___tostring(lua_State *L) {
  btBroadphaseInterface *self = *((btBroadphaseInterface **)dub_checksdata_n(L, 1, "bt.BroadphaseInterface"));
  lua_pushfstring(L, "bt.BroadphaseInterface: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btBroadphaseInterface_member_methods[] = {
  { "__gc"         , btBroadphaseInterface__btBroadphaseInterface },
  { "createProxy"  , btBroadphaseInterface_createProxy },
  { "destroyProxy" , btBroadphaseInterface_destroyProxy },
  { "setAabb"      , btBroadphaseInterface_setAabb },
  { "getAabb"      , btBroadphaseInterface_getAabb },
  { "rayTest"      , btBroadphaseInterface_rayTest },
  { "aabbTest"     , btBroadphaseInterface_aabbTest },
  { "calculateOverlappingPairs", btBroadphaseInterface_calculateOverlappingPairs },
  { "getOverlappingPairCache", btBroadphaseInterface_getOverlappingPairCache },
  { "getBroadphaseAabb", btBroadphaseInterface_getBroadphaseAabb },
  { "resetPool"    , btBroadphaseInterface_resetPool },
  { "printStats"   , btBroadphaseInterface_printStats },
  { "__tostring"   , btBroadphaseInterface___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_bt_BroadphaseInterface(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.BroadphaseInterface");
  // <mt>

  // register member methods
  luaL_register(L, NULL, btBroadphaseInterface_member_methods);
  // save meta-table in bt
  dub_register(L, "bt", "BroadphaseInterface", "BroadphaseInterface");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
