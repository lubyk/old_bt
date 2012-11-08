/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btCollisionWorld
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "BulletCollision/CollisionDispatch/btCollisionWorld.h"


/** btCollisionWorld::btCollisionWorld(btDispatcher *dispatcher, btBroadphaseInterface *broadphasePairCache, btCollisionConfiguration *collisionConfiguration)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:109
 */
static int btCollisionWorld_btCollisionWorld(lua_State *L) {
  try {
    btDispatcher *dispatcher = *((btDispatcher **)dub_checksdata(L, 1, "bt.Dispatcher"));
    btBroadphaseInterface *broadphasePairCache = *((btBroadphaseInterface **)dub_checksdata(L, 2, "bt.BroadphaseInterface"));
    btCollisionConfiguration *collisionConfiguration = *((btCollisionConfiguration **)dub_checksdata(L, 3, "bt.CollisionConfiguration"));
    btCollisionWorld *retval__ = new btCollisionWorld(dispatcher, broadphasePairCache, collisionConfiguration);
    dub_pushudata(L, retval__, "bt.CollisionWorld", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "btCollisionWorld: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "btCollisionWorld: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btCollisionWorld::~btCollisionWorld()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:111
 */
static int btCollisionWorld__btCollisionWorld(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "bt.CollisionWorld"));
    if (userdata->gc) {
      btCollisionWorld *self = (btCollisionWorld *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~btCollisionWorld: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~btCollisionWorld: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionWorld::setBroadphase(btBroadphaseInterface *pairCache)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:114
 */
static int btCollisionWorld_setBroadphase(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btBroadphaseInterface *pairCache = *((btBroadphaseInterface **)dub_checksdata(L, 2, "bt.BroadphaseInterface"));
    self->setBroadphase(pairCache);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setBroadphase: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setBroadphase: Unknown exception");
  }
  return dub_error(L);
}

/** const btBroadphaseInterface* btCollisionWorld::getBroadphase() const
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:119
 */
static int btCollisionWorld_getBroadphase(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    const btBroadphaseInterface *retval__ = self->getBroadphase();
    if (!retval__) return 0;
    dub_pushudata(L, const_cast<btBroadphaseInterface*>(retval__), "bt.BroadphaseInterface", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getBroadphase: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getBroadphase: Unknown exception");
  }
  return dub_error(L);
}

/** btOverlappingPairCache* btCollisionWorld::getPairCache()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:129
 */
static int btCollisionWorld_getPairCache(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btOverlappingPairCache *retval__ = self->getPairCache();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "OverlappingPairCache", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getPairCache: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getPairCache: Unknown exception");
  }
  return dub_error(L);
}

/** btDispatcher* btCollisionWorld::getDispatcher()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:135
 */
static int btCollisionWorld_getDispatcher(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btDispatcher *retval__ = self->getDispatcher();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "bt.Dispatcher", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDispatcher: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDispatcher: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionWorld::updateSingleAabb(btCollisionObject *colObj)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:144
 */
static int btCollisionWorld_updateSingleAabb(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btCollisionObject *colObj = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
    self->updateSingleAabb(colObj);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "updateSingleAabb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "updateSingleAabb: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::updateAabbs()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:146
 */
static int btCollisionWorld_updateAabbs(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    self->updateAabbs();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "updateAabbs: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "updateAabbs: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::computeOverlappingPairs()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:150
 */
static int btCollisionWorld_computeOverlappingPairs(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    self->computeOverlappingPairs();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "computeOverlappingPairs: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "computeOverlappingPairs: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::setDebugDrawer(btIDebugDraw *debugDrawer)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:154
 */
static int btCollisionWorld_setDebugDrawer(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btIDebugDraw *debugDrawer = *((btIDebugDraw **)dub_checksdata(L, 2, "bt.IDebugDraw"));
    self->setDebugDrawer(debugDrawer);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setDebugDrawer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setDebugDrawer: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btIDebugDraw* btCollisionWorld::getDebugDrawer()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:159
 */
static int btCollisionWorld_getDebugDrawer(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btIDebugDraw *retval__ = self->getDebugDrawer();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "bt.IDebugDraw", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDebugDrawer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDebugDrawer: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::debugDrawWorld()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:163
 */
static int btCollisionWorld_debugDrawWorld(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    self->debugDrawWorld();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "debugDrawWorld: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "debugDrawWorld: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::debugDrawObject(const btTransform &worldTransform, const btCollisionShape *shape, const btVector3 &color)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:165
 */
static int btCollisionWorld_debugDrawObject(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btTransform *worldTransform = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btCollisionShape *shape = *((btCollisionShape **)dub_checksdata(L, 3, "bt.CollisionShape"));
    btVector3 *color = *((btVector3 **)dub_checksdata(L, 4, "bt.Vector3"));
    self->debugDrawObject(*worldTransform, shape, *color);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "debugDrawObject: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "debugDrawObject: Unknown exception");
  }
  return dub_error(L);
}

/** int btCollisionWorld::getNumCollisionObjects() const
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:435
 */
static int btCollisionWorld_getNumCollisionObjects(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    lua_pushnumber(L, self->getNumCollisionObjects());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNumCollisionObjects: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNumCollisionObjects: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::rayTest(const btVector3 &rayFromWorld, const btVector3 &rayToWorld, RayResultCallback &resultCallback) const
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:441
 */
static int btCollisionWorld_rayTest(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btVector3 *rayFromWorld = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btVector3 *rayToWorld = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btCollisionWorld::RayResultCallback *resultCallback = *((btCollisionWorld::RayResultCallback **)dub_checksdata(L, 4, "bt.CollisionWorld.RayResultCallback"));
    self->rayTest(*rayFromWorld, *rayToWorld, *resultCallback);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "rayTest: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "rayTest: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionWorld::convexSweepTest(const btConvexShape *castShape, const btTransform &from, const btTransform &to, ConvexResultCallback &resultCallback, btScalar allowedCcdPenetration=btScalar(0.)) const
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:445
 */
static int btCollisionWorld_convexSweepTest(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    int top__ = lua_gettop(L);
    if (top__ >= 6) {
      btConvexShape *castShape = *((btConvexShape **)dub_checksdata(L, 2, "bt.ConvexShape"));
      btTransform *from = *((btTransform **)dub_checksdata(L, 3, "bt.Transform"));
      btTransform *to = *((btTransform **)dub_checksdata(L, 4, "bt.Transform"));
      btCollisionWorld::ConvexResultCallback *resultCallback = *((btCollisionWorld::ConvexResultCallback **)dub_checksdata(L, 5, "bt.CollisionWorld.ConvexResultCallback"));
      btScalar allowedCcdPenetration = dub_checknumber(L, 6);
      self->convexSweepTest(castShape, *from, *to, *resultCallback, allowedCcdPenetration);
      return 0;
    } else {
      btConvexShape *castShape = *((btConvexShape **)dub_checksdata(L, 2, "bt.ConvexShape"));
      btTransform *from = *((btTransform **)dub_checksdata(L, 3, "bt.Transform"));
      btTransform *to = *((btTransform **)dub_checksdata(L, 4, "bt.Transform"));
      btCollisionWorld::ConvexResultCallback *resultCallback = *((btCollisionWorld::ConvexResultCallback **)dub_checksdata(L, 5, "bt.CollisionWorld.ConvexResultCallback"));
      self->convexSweepTest(castShape, *from, *to, *resultCallback);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "convexSweepTest: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "convexSweepTest: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionWorld::contactTest(btCollisionObject *colObj, ContactResultCallback &resultCallback)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:449
 */
static int btCollisionWorld_contactTest(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btCollisionObject *colObj = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
    btCollisionWorld::ContactResultCallback *resultCallback = *((btCollisionWorld::ContactResultCallback **)dub_checksdata(L, 3, "bt.CollisionWorld.ContactResultCallback"));
    self->contactTest(colObj, *resultCallback);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "contactTest: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "contactTest: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionWorld::contactPairTest(btCollisionObject *colObjA, btCollisionObject *colObjB, ContactResultCallback &resultCallback)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:453
 */
static int btCollisionWorld_contactPairTest(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btCollisionObject *colObjA = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
    btCollisionObject *colObjB = *((btCollisionObject **)dub_checksdata(L, 3, "CollisionObject"));
    btCollisionWorld::ContactResultCallback *resultCallback = *((btCollisionWorld::ContactResultCallback **)dub_checksdata(L, 4, "bt.CollisionWorld.ContactResultCallback"));
    self->contactPairTest(colObjA, colObjB, *resultCallback);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "contactPairTest: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "contactPairTest: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::addCollisionObject(btCollisionObject *collisionObject, short int collisionFilterGroup=btBroadphaseProxy::DefaultFilter, short int collisionFilterMask=btBroadphaseProxy::AllFilter)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:480
 */
static int btCollisionWorld_addCollisionObject(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      btCollisionObject *collisionObject = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
      short int *collisionFilterGroup = *((short int **)dub_checksdata(L, 3, "short int"));
      short int *collisionFilterMask = *((short int **)dub_checksdata(L, 4, "short int"));
      self->addCollisionObject(collisionObject, *collisionFilterGroup, *collisionFilterMask);
      return 0;
    } else if (top__ >= 3) {
      btCollisionObject *collisionObject = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
      short int *collisionFilterGroup = *((short int **)dub_checksdata(L, 3, "short int"));
      self->addCollisionObject(collisionObject, *collisionFilterGroup);
      return 0;
    } else {
      btCollisionObject *collisionObject = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
      self->addCollisionObject(collisionObject);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "addCollisionObject: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "addCollisionObject: Unknown exception");
  }
  return dub_error(L);
}

/** btCollisionObjectArray& btCollisionWorld::getCollisionObjectArray()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:483
 */
static int btCollisionWorld_getCollisionObjectArray(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    dub_pushudata(L, &self->getCollisionObjectArray(), "CollisionObjectArray", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getCollisionObjectArray: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getCollisionObjectArray: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::removeCollisionObject(btCollisionObject *collisionObject)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:493
 */
static int btCollisionWorld_removeCollisionObject(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btCollisionObject *collisionObject = *((btCollisionObject **)dub_checksdata(L, 2, "CollisionObject"));
    self->removeCollisionObject(collisionObject);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "removeCollisionObject: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "removeCollisionObject: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::performDiscreteCollisionDetection()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:495
 */
static int btCollisionWorld_performDiscreteCollisionDetection(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    self->performDiscreteCollisionDetection();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "performDiscreteCollisionDetection: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "performDiscreteCollisionDetection: Unknown exception");
  }
  return dub_error(L);
}

/** btDispatcherInfo& btCollisionWorld::getDispatchInfo()
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:498
 */
static int btCollisionWorld_getDispatchInfo(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    dub_pushudata(L, &self->getDispatchInfo(), "bt.DispatcherInfo", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDispatchInfo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDispatchInfo: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionWorld::getForceUpdateAllAabbs() const
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:508
 */
static int btCollisionWorld_getForceUpdateAllAabbs(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    lua_pushboolean(L, self->getForceUpdateAllAabbs());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getForceUpdateAllAabbs: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getForceUpdateAllAabbs: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionWorld::setForceUpdateAllAabbs(bool forceUpdateAllAabbs)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:512
 */
static int btCollisionWorld_setForceUpdateAllAabbs(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    bool forceUpdateAllAabbs = dub_checkboolean(L, 2);
    self->setForceUpdateAllAabbs(forceUpdateAllAabbs);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setForceUpdateAllAabbs: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setForceUpdateAllAabbs: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionWorld::serialize(btSerializer *serializer)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:517
 */
static int btCollisionWorld_serialize(lua_State *L) {
  try {
    btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata(L, 1, "bt.CollisionWorld"));
    btSerializer *serializer = *((btSerializer **)dub_checksdata(L, 2, "Serializer"));
    self->serialize(serializer);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "serialize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "serialize: Unknown exception");
  }
  return dub_error(L);
}

/** static void btCollisionWorld::rayTestSingle(const btTransform &rayFromTrans, const btTransform &rayToTrans, btCollisionObject *collisionObject, const btCollisionShape *collisionShape, const btTransform &colObjWorldTransform, RayResultCallback &resultCallback)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:463
 */
static int btCollisionWorld_rayTestSingle(lua_State *L) {
  try {
    btTransform *rayFromTrans = *((btTransform **)dub_checksdata(L, 1, "bt.Transform"));
    btTransform *rayToTrans = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btCollisionObject *collisionObject = *((btCollisionObject **)dub_checksdata(L, 3, "CollisionObject"));
    btCollisionShape *collisionShape = *((btCollisionShape **)dub_checksdata(L, 4, "bt.CollisionShape"));
    btTransform *colObjWorldTransform = *((btTransform **)dub_checksdata(L, 5, "bt.Transform"));
    btCollisionWorld::RayResultCallback *resultCallback = *((btCollisionWorld::RayResultCallback **)dub_checksdata(L, 6, "bt.CollisionWorld.RayResultCallback"));
    btCollisionWorld::rayTestSingle(*rayFromTrans, *rayToTrans, collisionObject, collisionShape, *colObjWorldTransform, *resultCallback);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "rayTestSingle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "rayTestSingle: Unknown exception");
  }
  return dub_error(L);
}

/** static void btCollisionWorld::rayTestSingleInternal(const btTransform &rayFromTrans, const btTransform &rayToTrans, const btCollisionObjectWrapper *collisionObjectWrap, RayResultCallback &resultCallback)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:467
 */
static int btCollisionWorld_rayTestSingleInternal(lua_State *L) {
  try {
    btTransform *rayFromTrans = *((btTransform **)dub_checksdata(L, 1, "bt.Transform"));
    btTransform *rayToTrans = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btCollisionObjectWrapper *collisionObjectWrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 3, "CollisionObjectWrapper"));
    btCollisionWorld::RayResultCallback *resultCallback = *((btCollisionWorld::RayResultCallback **)dub_checksdata(L, 4, "bt.CollisionWorld.RayResultCallback"));
    btCollisionWorld::rayTestSingleInternal(*rayFromTrans, *rayToTrans, collisionObjectWrap, *resultCallback);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "rayTestSingleInternal: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "rayTestSingleInternal: Unknown exception");
  }
  return dub_error(L);
}

/** static void btCollisionWorld::objectQuerySingle(const btConvexShape *castShape, const btTransform &rayFromTrans, const btTransform &rayToTrans, btCollisionObject *collisionObject, const btCollisionShape *collisionShape, const btTransform &colObjWorldTransform, ConvexResultCallback &resultCallback, btScalar allowedPenetration)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:474
 */
static int btCollisionWorld_objectQuerySingle(lua_State *L) {
  try {
    btConvexShape *castShape = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btTransform *rayFromTrans = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btTransform *rayToTrans = *((btTransform **)dub_checksdata(L, 3, "bt.Transform"));
    btCollisionObject *collisionObject = *((btCollisionObject **)dub_checksdata(L, 4, "CollisionObject"));
    btCollisionShape *collisionShape = *((btCollisionShape **)dub_checksdata(L, 5, "bt.CollisionShape"));
    btTransform *colObjWorldTransform = *((btTransform **)dub_checksdata(L, 6, "bt.Transform"));
    btCollisionWorld::ConvexResultCallback *resultCallback = *((btCollisionWorld::ConvexResultCallback **)dub_checksdata(L, 7, "bt.CollisionWorld.ConvexResultCallback"));
    btScalar allowedPenetration = dub_checknumber(L, 8);
    btCollisionWorld::objectQuerySingle(castShape, *rayFromTrans, *rayToTrans, collisionObject, collisionShape, *colObjWorldTransform, *resultCallback, allowedPenetration);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "objectQuerySingle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "objectQuerySingle: Unknown exception");
  }
  return dub_error(L);
}

/** static void btCollisionWorld::objectQuerySingleInternal(const btConvexShape *castShape, const btTransform &convexFromTrans, const btTransform &convexToTrans, const btCollisionObjectWrapper *colObjWrap, ConvexResultCallback &resultCallback, btScalar allowedPenetration)
 * src/vendor/bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h:478
 */
static int btCollisionWorld_objectQuerySingleInternal(lua_State *L) {
  try {
    btConvexShape *castShape = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btTransform *convexFromTrans = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btTransform *convexToTrans = *((btTransform **)dub_checksdata(L, 3, "bt.Transform"));
    btCollisionObjectWrapper *colObjWrap = *((btCollisionObjectWrapper **)dub_checksdata(L, 4, "CollisionObjectWrapper"));
    btCollisionWorld::ConvexResultCallback *resultCallback = *((btCollisionWorld::ConvexResultCallback **)dub_checksdata(L, 5, "bt.CollisionWorld.ConvexResultCallback"));
    btScalar allowedPenetration = dub_checknumber(L, 6);
    btCollisionWorld::objectQuerySingleInternal(castShape, *convexFromTrans, *convexToTrans, colObjWrap, *resultCallback, allowedPenetration);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "objectQuerySingleInternal: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "objectQuerySingleInternal: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int btCollisionWorld___tostring(lua_State *L) {
  btCollisionWorld *self = *((btCollisionWorld **)dub_checksdata_n(L, 1, "bt.CollisionWorld"));
  lua_pushfstring(L, "bt.CollisionWorld: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btCollisionWorld_member_methods[] = {
  { "new"          , btCollisionWorld_btCollisionWorld },
  { "__gc"         , btCollisionWorld__btCollisionWorld },
  { "setBroadphase", btCollisionWorld_setBroadphase },
  { "getBroadphase", btCollisionWorld_getBroadphase },
  { "getPairCache" , btCollisionWorld_getPairCache },
  { "getDispatcher", btCollisionWorld_getDispatcher },
  { "updateSingleAabb", btCollisionWorld_updateSingleAabb },
  { "updateAabbs"  , btCollisionWorld_updateAabbs },
  { "computeOverlappingPairs", btCollisionWorld_computeOverlappingPairs },
  { "setDebugDrawer", btCollisionWorld_setDebugDrawer },
  { "getDebugDrawer", btCollisionWorld_getDebugDrawer },
  { "debugDrawWorld", btCollisionWorld_debugDrawWorld },
  { "debugDrawObject", btCollisionWorld_debugDrawObject },
  { "getNumCollisionObjects", btCollisionWorld_getNumCollisionObjects },
  { "rayTest"      , btCollisionWorld_rayTest },
  { "convexSweepTest", btCollisionWorld_convexSweepTest },
  { "contactTest"  , btCollisionWorld_contactTest },
  { "contactPairTest", btCollisionWorld_contactPairTest },
  { "addCollisionObject", btCollisionWorld_addCollisionObject },
  { "getCollisionObjectArray", btCollisionWorld_getCollisionObjectArray },
  { "removeCollisionObject", btCollisionWorld_removeCollisionObject },
  { "performDiscreteCollisionDetection", btCollisionWorld_performDiscreteCollisionDetection },
  { "getDispatchInfo", btCollisionWorld_getDispatchInfo },
  { "getForceUpdateAllAabbs", btCollisionWorld_getForceUpdateAllAabbs },
  { "setForceUpdateAllAabbs", btCollisionWorld_setForceUpdateAllAabbs },
  { "serialize"    , btCollisionWorld_serialize },
  { "rayTestSingle", btCollisionWorld_rayTestSingle },
  { "rayTestSingleInternal", btCollisionWorld_rayTestSingleInternal },
  { "objectQuerySingle", btCollisionWorld_objectQuerySingle },
  { "objectQuerySingleInternal", btCollisionWorld_objectQuerySingleInternal },
  { "__tostring"   , btCollisionWorld___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_bt_CollisionWorld(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.CollisionWorld");
  // <mt>

  // register member methods
  luaL_register(L, NULL, btCollisionWorld_member_methods);
  // save meta-table in bt
  dub_register(L, "bt", "CollisionWorld", "CollisionWorld");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
