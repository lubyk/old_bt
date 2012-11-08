/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btDispatcher
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "BulletCollision/BroadphaseCollision/btDispatcher.h"


/** virtual btDispatcher::~btDispatcher()
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:77
 */
static int btDispatcher__btDispatcher(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "bt.Dispatcher"));
    if (userdata->gc) {
      btDispatcher *self = (btDispatcher *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~btDispatcher: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~btDispatcher: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btCollisionAlgorithm* btDispatcher::findAlgorithm(const btCollisionObjectWrapper *body0Wrap, const btCollisionObjectWrapper *body1Wrap, btPersistentManifold *sharedManifold=0)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:79
 */
static int btDispatcher_findAlgorithm(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      btCollisionObjectWrapper *body0Wrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 2, "CollisionObjectWrapper"));
      btCollisionObjectWrapper *body1Wrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 3, "CollisionObjectWrapper"));
      btPersistentManifold *sharedManifold = *((btPersistentManifold **)dub_checksdata(L, 4, "PersistentManifold"));
      btCollisionAlgorithm *retval__ = self->findAlgorithm(body0Wrap, body1Wrap, sharedManifold);
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "CollisionAlgorithm", false);
      return 1;
    } else {
      btCollisionObjectWrapper *body0Wrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 2, "CollisionObjectWrapper"));
      btCollisionObjectWrapper *body1Wrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 3, "CollisionObjectWrapper"));
      btCollisionAlgorithm *retval__ = self->findAlgorithm(body0Wrap, body1Wrap);
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "CollisionAlgorithm", false);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "findAlgorithm: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "findAlgorithm: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btPersistentManifold* btDispatcher::getNewManifold(const btCollisionObject *b0, const btCollisionObject *b1)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:81
 */
static int btDispatcher_getNewManifold(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btCollisionObject *b0 = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
    btCollisionObject *b1 = *((btCollisionObject **)dub_checksdata(L, 3, "CollisionObject"));
    btPersistentManifold *retval__ = self->getNewManifold(b0, b1);
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "PersistentManifold", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNewManifold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNewManifold: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btDispatcher::releaseManifold(btPersistentManifold *manifold)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:83
 */
static int btDispatcher_releaseManifold(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btPersistentManifold *manifold = *((btPersistentManifold **)dub_checksdata(L, 2, "PersistentManifold"));
    self->releaseManifold(manifold);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "releaseManifold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "releaseManifold: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btDispatcher::clearManifold(btPersistentManifold *manifold)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:85
 */
static int btDispatcher_clearManifold(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btPersistentManifold *manifold = *((btPersistentManifold **)dub_checksdata(L, 2, "PersistentManifold"));
    self->clearManifold(manifold);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "clearManifold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "clearManifold: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool btDispatcher::needsCollision(const btCollisionObject *body0, const btCollisionObject *body1)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:87
 */
static int btDispatcher_needsCollision(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btCollisionObject *body0 = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
    btCollisionObject *body1 = *((btCollisionObject **)dub_checksdata(L, 3, "CollisionObject"));
    lua_pushboolean(L, self->needsCollision(body0, body1));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "needsCollision: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "needsCollision: Unknown exception");
  }
  return dub_error(L);
}

/** virtual bool btDispatcher::needsResponse(const btCollisionObject *body0, const btCollisionObject *body1)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:89
 */
static int btDispatcher_needsResponse(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btCollisionObject *body0 = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
    btCollisionObject *body1 = *((btCollisionObject **)dub_checksdata(L, 3, "CollisionObject"));
    lua_pushboolean(L, self->needsResponse(body0, body1));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "needsResponse: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "needsResponse: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache *pairCache, const btDispatcherInfo &dispatchInfo, btDispatcher *dispatcher)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:91
 */
static int btDispatcher_dispatchAllCollisionPairs(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btOverlappingPairCache *pairCache = *((btOverlappingPairCache **)dub_checksdata(L, 2, "OverlappingPairCache"));
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

/** virtual int btDispatcher::getNumManifolds() const =0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:93
 */
static int btDispatcher_getNumManifolds(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    lua_pushnumber(L, self->getNumManifolds());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNumManifolds: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNumManifolds: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btPersistentManifold* btDispatcher::getManifoldByIndexInternal(int index)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:95
 */
static int btDispatcher_getManifoldByIndexInternal(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    int index = dub_checkint(L, 2);
    btPersistentManifold *retval__ = self->getManifoldByIndexInternal(index);
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "PersistentManifold", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getManifoldByIndexInternal: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getManifoldByIndexInternal: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btPersistentManifold** btDispatcher::getInternalManifoldPointer()=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:97
 */
static int btDispatcher_getInternalManifoldPointer(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btPersistentManifold* *retval__ = self->getInternalManifoldPointer();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "PersistentManifold*", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getInternalManifoldPointer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getInternalManifoldPointer: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btPoolAllocator* btDispatcher::getInternalManifoldPool()=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:99
 */
static int btDispatcher_getInternalManifoldPool(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btPoolAllocator *retval__ = self->getInternalManifoldPool();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "PoolAllocator", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getInternalManifoldPool: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getInternalManifoldPool: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void* btDispatcher::allocateCollisionAlgorithm(int size)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:103
 */
static int btDispatcher_allocateCollisionAlgorithm(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
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

/** virtual void btDispatcher::freeCollisionAlgorithm(void *ptr)=0
 * src/vendor/bullet/src/BulletCollision/BroadphaseCollision/btDispatcher.h:105
 */
static int btDispatcher_freeCollisionAlgorithm(lua_State *L) {
  try {
    btDispatcher *self = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
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



// --=============================================== __tostring
static int btDispatcher___tostring(lua_State *L) {
  btDispatcher *self = *((btDispatcher **)dub_checksdata_n(L, 1, "bt.Dispatcher"));
  lua_pushfstring(L, "bt.Dispatcher: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btDispatcher_member_methods[] = {
  { "__gc"         , btDispatcher__btDispatcher },
  { "findAlgorithm", btDispatcher_findAlgorithm },
  { "getNewManifold", btDispatcher_getNewManifold },
  { "releaseManifold", btDispatcher_releaseManifold },
  { "clearManifold", btDispatcher_clearManifold },
  { "needsCollision", btDispatcher_needsCollision },
  { "needsResponse", btDispatcher_needsResponse },
  { "dispatchAllCollisionPairs", btDispatcher_dispatchAllCollisionPairs },
  { "getNumManifolds", btDispatcher_getNumManifolds },
  { "getManifoldByIndexInternal", btDispatcher_getManifoldByIndexInternal },
  { "getInternalManifoldPointer", btDispatcher_getInternalManifoldPointer },
  { "getInternalManifoldPool", btDispatcher_getInternalManifoldPool },
  { "allocateCollisionAlgorithm", btDispatcher_allocateCollisionAlgorithm },
  { "freeCollisionAlgorithm", btDispatcher_freeCollisionAlgorithm },
  { "__tostring"   , btDispatcher___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_bt_Dispatcher(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.Dispatcher");
  // <mt>

  // register member methods
  luaL_register(L, NULL, btDispatcher_member_methods);
  // save meta-table in bt
  dub_register(L, "bt", "Dispatcher", "Dispatcher");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
