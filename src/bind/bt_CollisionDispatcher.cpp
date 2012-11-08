/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btCollisionDispatcher
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "BulletCollision/CollisionDispatch/btCollisionDispatcher.h"


/** Cast (class_name)
 * 
 */
static int btCollisionDispatcher__cast_(lua_State *L) {

  btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata_n(L, 1, "bt.CollisionDispatcher"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.Dispatcher")) break;
      *retval__ = static_cast<btDispatcher *>(self);
      return 1;
    }
  }
  return 0;
}

/** int btCollisionDispatcher::getDispatcherFlags() const
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:75
 */
static int btCollisionDispatcher_getDispatcherFlags(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    lua_pushnumber(L, self->getDispatcherFlags());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDispatcherFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDispatcherFlags: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionDispatcher::setDispatcherFlags(int flags)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:80
 */
static int btCollisionDispatcher_setDispatcherFlags(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    int flags = dub_checkint(L, 2);
    self->setDispatcherFlags(flags);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setDispatcherFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setDispatcherFlags: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionDispatcher::registerCollisionCreateFunc(int proxyType0, int proxyType1, btCollisionAlgorithmCreateFunc *createFunc)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:85
 */
static int btCollisionDispatcher_registerCollisionCreateFunc(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    int proxyType0 = dub_checkint(L, 2);
    int proxyType1 = dub_checkint(L, 3);
    btCollisionAlgorithmCreateFunc *createFunc = *((btCollisionAlgorithmCreateFunc **)dub_checksdata(L, 4, "CollisionAlgorithmCreateFunc *"));
    self->registerCollisionCreateFunc(proxyType0, proxyType1, createFunc);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "registerCollisionCreateFunc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "registerCollisionCreateFunc: Unknown exception");
  }
  return dub_error(L);
}

/** int btCollisionDispatcher::getNumManifolds() const
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:88
 */
static int btCollisionDispatcher_getNumManifolds(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    lua_pushnumber(L, self->getNumManifolds());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNumManifolds: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNumManifolds: Unknown exception");
  }
  return dub_error(L);
}

/** btPersistentManifold** btCollisionDispatcher::getInternalManifoldPointer()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:93
 */
static int btCollisionDispatcher_getInternalManifoldPointer(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btPersistentManifold* *retval__ = self->getInternalManifoldPointer();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "PersistentManifold* *", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getInternalManifoldPointer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getInternalManifoldPointer: Unknown exception");
  }
  return dub_error(L);
}

/** btPersistentManifold* btCollisionDispatcher::getManifoldByIndexInternal(int index)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:98
 */
static int btCollisionDispatcher_getManifoldByIndexInternal(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    int index = dub_checkint(L, 2);
    btPersistentManifold *retval__ = self->getManifoldByIndexInternal(index);
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "PersistentManifold *", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getManifoldByIndexInternal: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getManifoldByIndexInternal: Unknown exception");
  }
  return dub_error(L);
}

/** btCollisionDispatcher::btCollisionDispatcher(btCollisionConfiguration *collisionConfiguration)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:107
 */
static int btCollisionDispatcher_btCollisionDispatcher(lua_State *L) {
  try {
    btCollisionConfiguration *collisionConfiguration = *((btCollisionConfiguration **)dub_checksdata(L, 1, "bt.CollisionConfiguration"));
    btCollisionDispatcher *retval__ = new btCollisionDispatcher(collisionConfiguration);
    dub_pushudata(L, retval__, "bt.CollisionDispatcher", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "btCollisionDispatcher: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "btCollisionDispatcher: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btCollisionDispatcher::~btCollisionDispatcher()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:109
 */
static int btCollisionDispatcher__btCollisionDispatcher(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "bt.CollisionDispatcher"));
    if (userdata->gc) {
      btCollisionDispatcher *self = (btCollisionDispatcher *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~btCollisionDispatcher: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~btCollisionDispatcher: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btPersistentManifold* btCollisionDispatcher::getNewManifold(const btCollisionObject *b0, const btCollisionObject *b1)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:111
 */
static int btCollisionDispatcher_getNewManifold(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btCollisionObject *b0 = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject *"));
    btCollisionObject *b1 = *((btCollisionObject **)dub_checksdata(L, 3, "CollisionObject *"));
    btPersistentManifold *retval__ = self->getNewManifold(b0, b1);
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "PersistentManifold *", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNewManifold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNewManifold: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionDispatcher::releaseManifold(btPersistentManifold *manifold)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:113
 */
static int btCollisionDispatcher_releaseManifold(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btPersistentManifold *manifold = *((btPersistentManifold **)dub_checksdata(L, 2, "PersistentManifold *"));
    self->releaseManifold(manifold);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "releaseManifold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "releaseManifold: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionDispatcher::clearManifold(btPersistentManifold *manifold)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:116
 */
static int btCollisionDispatcher_clearManifold(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btPersistentManifold *manifold = *((btPersistentManifold **)dub_checksdata(L, 2, "PersistentManifold *"));
    self->clearManifold(manifold);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "clearManifold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "clearManifold: Unknown exception");
  }
  return dub_error(L);
}

/** btCollisionAlgorithm* btCollisionDispatcher::findAlgorithm(const btCollisionObjectWrapper *body0Wrap, const btCollisionObjectWrapper *body1Wrap, btPersistentManifold *sharedManifold=0)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:118
 */
static int btCollisionDispatcher_findAlgorithm(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      btCollisionObjectWrapper *body0Wrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 2, "CollisionObjectWrapper *"));
      btCollisionObjectWrapper *body1Wrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 3, "CollisionObjectWrapper *"));
      btPersistentManifold *sharedManifold = *((btPersistentManifold **)dub_checksdata(L, 4, "PersistentManifold *"));
      btCollisionAlgorithm *retval__ = self->findAlgorithm(body0Wrap, body1Wrap, sharedManifold);
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "CollisionAlgorithm *", false);
      return 1;
    } else {
      btCollisionObjectWrapper *body0Wrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 2, "CollisionObjectWrapper *"));
      btCollisionObjectWrapper *body1Wrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 3, "CollisionObjectWrapper *"));
      btCollisionAlgorithm *retval__ = self->findAlgorithm(body0Wrap, body1Wrap);
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "CollisionAlgorithm *", false);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "findAlgorithm: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "findAlgorithm: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool btCollisionDispatcher::needsCollision(const btCollisionObject *body0, const btCollisionObject *body1)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:120
 */
static int btCollisionDispatcher_needsCollision(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btCollisionObject *body0 = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject *"));
    btCollisionObject *body1 = *((btCollisionObject **)dub_checksdata(L, 3, "CollisionObject *"));
    lua_pushboolean(L, self->needsCollision(body0, body1));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "needsCollision: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "needsCollision: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool btCollisionDispatcher::needsResponse(const btCollisionObject *body0, const btCollisionObject *body1)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:122
 */
static int btCollisionDispatcher_needsResponse(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btCollisionObject *body0 = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject *"));
    btCollisionObject *body1 = *((btCollisionObject **)dub_checksdata(L, 3, "CollisionObject *"));
    lua_pushboolean(L, self->needsResponse(body0, body1));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "needsResponse: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "needsResponse: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache *pairCache, const btDispatcherInfo &dispatchInfo, btDispatcher *dispatcher)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:124
 */
static int btCollisionDispatcher_dispatchAllCollisionPairs(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btOverlappingPairCache *pairCache = *((btOverlappingPairCache **)dub_checksdata(L, 2, "OverlappingPairCache *"));
    btDispatcherInfo *dispatchInfo = *((btDispatcherInfo **)dub_checksdata(L, 3, "bt.DispatcherInfo"));
    btDispatcher *dispatcher = *((btDispatcher **)dub_checksdata(L, 4, "bt.Dispatcher"));
    self->dispatchAllCollisionPairs(pairCache, *dispatchInfo, dispatcher);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "dispatchAllCollisionPairs: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "dispatchAllCollisionPairs: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionDispatcher::setNearCallback(btNearCallback nearCallback)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:127
 */
static int btCollisionDispatcher_setNearCallback(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btNearCallback *nearCallback = *((btNearCallback **)dub_checksdata(L, 2, "NearCallback *"));
    self->setNearCallback(*nearCallback);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setNearCallback: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setNearCallback: Unknown exception");
  }
  return dub_error(L);
}

/** btNearCallback btCollisionDispatcher::getNearCallback() const
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:132
 */
static int btCollisionDispatcher_getNearCallback(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    dub_pushudata(L, new btNearCallback(self->getNearCallback()), "NearCallback *", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNearCallback: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNearCallback: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void* btCollisionDispatcher::allocateCollisionAlgorithm(int size)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:139
 */
static int btCollisionDispatcher_allocateCollisionAlgorithm(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    int size = dub_checkint(L, 2);
    self->allocateCollisionAlgorithm(size);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "allocateCollisionAlgorithm: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "allocateCollisionAlgorithm: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionDispatcher::freeCollisionAlgorithm(void *ptr)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:141
 */
static int btCollisionDispatcher_freeCollisionAlgorithm(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    void *ptr = *((void **)dub_checksdata(L, 2, "void"));
    self->freeCollisionAlgorithm(ptr);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "freeCollisionAlgorithm: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "freeCollisionAlgorithm: Unknown exception");
  }
  return dub_error(L);
}

/** btCollisionConfiguration* btCollisionDispatcher::getCollisionConfiguration()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:144
 */
static int btCollisionDispatcher_getCollisionConfiguration(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btCollisionConfiguration *retval__ = self->getCollisionConfiguration();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "bt.CollisionConfiguration", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getCollisionConfiguration: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getCollisionConfiguration: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionDispatcher::setCollisionConfiguration(btCollisionConfiguration *config)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:154
 */
static int btCollisionDispatcher_setCollisionConfiguration(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btCollisionConfiguration *config = *((btCollisionConfiguration **)dub_checksdata(L, 2, "bt.CollisionConfiguration"));
    self->setCollisionConfiguration(config);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setCollisionConfiguration: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setCollisionConfiguration: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btPoolAllocator* btCollisionDispatcher::getInternalManifoldPool()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:159
 */
static int btCollisionDispatcher_getInternalManifoldPool(lua_State *L) {
  try {
    btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata(L, 1, "bt.CollisionDispatcher"));
    btPoolAllocator *retval__ = self->getInternalManifoldPool();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "PoolAllocator *", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getInternalManifoldPool: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getInternalManifoldPool: Unknown exception");
  }
  return dub_error(L);
}

/** static void btCollisionDispatcher::defaultNearCallback(btBroadphasePair &collisionPair, btCollisionDispatcher &dispatcher, const btDispatcherInfo &dispatchInfo)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h:137
 */
static int btCollisionDispatcher_defaultNearCallback(lua_State *L) {
  try {
    btBroadphasePair *collisionPair = *((btBroadphasePair **)dub_checksdata(L, 1, "BroadphasePair"));
    btCollisionDispatcher *dispatcher = *((btCollisionDispatcher **)dub_checksdata(L, 2, "bt.CollisionDispatcher"));
    btDispatcherInfo *dispatchInfo = *((btDispatcherInfo **)dub_checksdata(L, 3, "bt.DispatcherInfo"));
    btCollisionDispatcher::defaultNearCallback(*collisionPair, *dispatcher, *dispatchInfo);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "defaultNearCallback: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "defaultNearCallback: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int btCollisionDispatcher___tostring(lua_State *L) {
  btCollisionDispatcher *self = *((btCollisionDispatcher **)dub_checksdata_n(L, 1, "bt.CollisionDispatcher"));
  lua_pushfstring(L, "bt.CollisionDispatcher: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btCollisionDispatcher_member_methods[] = {
  { "_cast_"       , btCollisionDispatcher__cast_ },
  { "getDispatcherFlags", btCollisionDispatcher_getDispatcherFlags },
  { "setDispatcherFlags", btCollisionDispatcher_setDispatcherFlags },
  { "registerCollisionCreateFunc", btCollisionDispatcher_registerCollisionCreateFunc },
  { "getNumManifolds", btCollisionDispatcher_getNumManifolds },
  { "getInternalManifoldPointer", btCollisionDispatcher_getInternalManifoldPointer },
  { "getManifoldByIndexInternal", btCollisionDispatcher_getManifoldByIndexInternal },
  { "new"          , btCollisionDispatcher_btCollisionDispatcher },
  { "__gc"         , btCollisionDispatcher__btCollisionDispatcher },
  { "getNewManifold", btCollisionDispatcher_getNewManifold },
  { "releaseManifold", btCollisionDispatcher_releaseManifold },
  { "clearManifold", btCollisionDispatcher_clearManifold },
  { "findAlgorithm", btCollisionDispatcher_findAlgorithm },
  { "needsCollision", btCollisionDispatcher_needsCollision },
  { "needsResponse", btCollisionDispatcher_needsResponse },
  { "dispatchAllCollisionPairs", btCollisionDispatcher_dispatchAllCollisionPairs },
  { "setNearCallback", btCollisionDispatcher_setNearCallback },
  { "getNearCallback", btCollisionDispatcher_getNearCallback },
  { "allocateCollisionAlgorithm", btCollisionDispatcher_allocateCollisionAlgorithm },
  { "freeCollisionAlgorithm", btCollisionDispatcher_freeCollisionAlgorithm },
  { "getCollisionConfiguration", btCollisionDispatcher_getCollisionConfiguration },
  { "setCollisionConfiguration", btCollisionDispatcher_setCollisionConfiguration },
  { "getInternalManifoldPool", btCollisionDispatcher_getInternalManifoldPool },
  { "defaultNearCallback", btCollisionDispatcher_defaultNearCallback },
  { "__tostring"   , btCollisionDispatcher___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};

// --=============================================== CONSTANTS
static const struct dub_const_Reg btCollisionDispatcher_const[] = {
  { "CD_STATIC_STATIC_REPORTED", btCollisionDispatcher::CD_STATIC_STATIC_REPORTED },
  { "CD_USE_RELATIVE_CONTACT_BREAKING_THRESHOLD", btCollisionDispatcher::CD_USE_RELATIVE_CONTACT_BREAKING_THRESHOLD },
  { "CD_DISABLE_CONTACTPOOL_DYNAMIC_ALLOCATION", btCollisionDispatcher::CD_DISABLE_CONTACTPOOL_DYNAMIC_ALLOCATION },
  { NULL, 0},
};

extern "C" int luaopen_bt_CollisionDispatcher(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.CollisionDispatcher");
  // <mt>
  // register class constants
  dub_register_const(L, btCollisionDispatcher_const);

  // register member methods
  luaL_register(L, NULL, btCollisionDispatcher_member_methods);
  // save meta-table in bt
  dub_register(L, "bt", "CollisionDispatcher", "CollisionDispatcher");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
