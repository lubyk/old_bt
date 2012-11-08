/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btConvexShape
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "BulletCollision/CollisionShapes/btConvexShape.h"


/** Cast (class_name)
 * 
 */
static int btConvexShape__cast_(lua_State *L) {

  btConvexShape *self = *((btConvexShape **)dub_checksdata_n(L, 1, "bt.ConvexShape"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.CollisionShape")) break;
      *retval__ = static_cast<btCollisionShape *>(self);
      return 1;
    }
  }
  return 0;
}

/** virtual btConvexShape::~btConvexShape()
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:41
 */
static int btConvexShape__btConvexShape(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "bt.ConvexShape"));
    if (userdata->gc) {
      btConvexShape *self = (btConvexShape *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~btConvexShape: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~btConvexShape: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btVector3 btConvexShape::localGetSupportingVertex(const btVector3 &vec) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:43
 */
static int btConvexShape_localGetSupportingVertex(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btVector3 *vec = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    dub_pushudata(L, new btVector3(self->localGetSupportingVertex(*vec)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "localGetSupportingVertex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "localGetSupportingVertex: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btVector3 btConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 &vec) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:47
 */
static int btConvexShape_localGetSupportingVertexWithoutMargin(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btVector3 *vec = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    dub_pushudata(L, new btVector3(self->localGetSupportingVertexWithoutMargin(*vec)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "localGetSupportingVertexWithoutMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "localGetSupportingVertexWithoutMargin: Unknown exception");
  }
  return dub_error(L);
}

/** btVector3 btConvexShape::localGetSupportVertexWithoutMarginNonVirtual(const btVector3 &vec) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:50
 */
static int btConvexShape_localGetSupportVertexWithoutMarginNonVirtual(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btVector3 *vec = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    dub_pushudata(L, new btVector3(self->localGetSupportVertexWithoutMarginNonVirtual(*vec)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "localGetSupportVertexWithoutMarginNonVirtual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "localGetSupportVertexWithoutMarginNonVirtual: Unknown exception");
  }
  return dub_error(L);
}

/** btVector3 btConvexShape::localGetSupportVertexNonVirtual(const btVector3 &vec) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:51
 */
static int btConvexShape_localGetSupportVertexNonVirtual(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btVector3 *vec = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    dub_pushudata(L, new btVector3(self->localGetSupportVertexNonVirtual(*vec)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "localGetSupportVertexNonVirtual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "localGetSupportVertexNonVirtual: Unknown exception");
  }
  return dub_error(L);
}

/** btScalar btConvexShape::getMarginNonVirtual() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:52
 */
static int btConvexShape_getMarginNonVirtual(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushnumber(L, self->getMarginNonVirtual());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getMarginNonVirtual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getMarginNonVirtual: Unknown exception");
  }
  return dub_error(L);
}

/** void btConvexShape::getAabbNonVirtual(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:53
 */
static int btConvexShape_getAabbNonVirtual(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btTransform *t = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 4, "bt.Vector3"));
    self->getAabbNonVirtual(*t, *aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAabbNonVirtual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAabbNonVirtual: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btConvexShape::project(const btTransform &trans, const btVector3 &dir, btScalar &min, btScalar &max) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:55
 */
static int btConvexShape_project(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btTransform *trans = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btVector3 *dir = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btScalar min = dub_checknumber(L, 4);
    btScalar max = dub_checknumber(L, 5);
    self->project(*trans, *dir, min, max);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "project: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "project: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *vectors, btVector3 *supportVerticesOut, int numVectors) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:59
 */
static int btConvexShape_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btVector3 *vectors = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btVector3 *supportVerticesOut = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    int numVectors = dub_checkint(L, 4);
    self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "batchedUnitVectorGetSupportingVertexWithoutMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "batchedUnitVectorGetSupportingVertexWithoutMargin: Unknown exception");
  }
  return dub_error(L);
}

/** void btConvexShape::getAabb(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:62
 */
static int btConvexShape_getAabb(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btTransform *t = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 4, "bt.Vector3"));
    self->getAabb(*t, *aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAabb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAabb: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btConvexShape::getAabbSlow(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:64
 */
static int btConvexShape_getAabbSlow(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btTransform *t = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btVector3 *aabbMin = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub_checksdata(L, 4, "bt.Vector3"));
    self->getAabbSlow(*t, *aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAabbSlow: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAabbSlow: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btConvexShape::setLocalScaling(const btVector3 &scaling)=0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:66
 */
static int btConvexShape_setLocalScaling(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btVector3 *scaling = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    self->setLocalScaling(*scaling);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setLocalScaling: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setLocalScaling: Unknown exception");
  }
  return dub_error(L);
}

/** virtual const btVector3& btConvexShape::getLocalScaling() const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:67
 */
static int btConvexShape_getLocalScaling(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    dub_pushudata(L, const_cast<btVector3*>(&self->getLocalScaling()), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getLocalScaling: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getLocalScaling: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btConvexShape::setMargin(btScalar margin)=0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:69
 */
static int btConvexShape_setMargin(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btScalar margin = dub_checknumber(L, 2);
    self->setMargin(margin);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMargin: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btScalar btConvexShape::getMargin() const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:71
 */
static int btConvexShape_getMargin(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushnumber(L, self->getMargin());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getMargin: Unknown exception");
  }
  return dub_error(L);
}

/** virtual int btConvexShape::getNumPreferredPenetrationDirections() const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:73
 */
static int btConvexShape_getNumPreferredPenetrationDirections(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushnumber(L, self->getNumPreferredPenetrationDirections());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNumPreferredPenetrationDirections: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNumPreferredPenetrationDirections: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btConvexShape::getPreferredPenetrationDirection(int index, btVector3 &penetrationVector) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:75
 */
static int btConvexShape_getPreferredPenetrationDirection(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    int index = dub_checkint(L, 2);
    btVector3 *penetrationVector = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    self->getPreferredPenetrationDirection(index, *penetrationVector);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getPreferredPenetrationDirection: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getPreferredPenetrationDirection: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionShape::getBoundingSphere(btVector3 &center, btScalar &radius) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:48
 */
static int btConvexShape_getBoundingSphere(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btVector3 *center = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btScalar radius = dub_checknumber(L, 3);
    self->getBoundingSphere(*center, radius);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getBoundingSphere: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getBoundingSphere: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btScalar btCollisionShape::getAngularMotionDisc() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:51
 */
static int btConvexShape_getAngularMotionDisc(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushnumber(L, self->getAngularMotionDisc());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAngularMotionDisc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAngularMotionDisc: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btScalar btCollisionShape::getContactBreakingThreshold(btScalar defaultContactThresholdFactor) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:53
 */
static int btConvexShape_getContactBreakingThreshold(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btScalar defaultContactThresholdFactor = dub_checknumber(L, 2);
    lua_pushnumber(L, self->getContactBreakingThreshold(defaultContactThresholdFactor));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getContactBreakingThreshold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getContactBreakingThreshold: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionShape::calculateTemporalAabb(const btTransform &curTrans, const btVector3 &linvel, const btVector3 &angvel, btScalar timeStep, btVector3 &temporalAabbMin, btVector3 &temporalAabbMax) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:58
 */
static int btConvexShape_calculateTemporalAabb(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btTransform *curTrans = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    btVector3 *linvel = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    btVector3 *angvel = *((btVector3 **)dub_checksdata(L, 4, "bt.Vector3"));
    btScalar timeStep = dub_checknumber(L, 5);
    btVector3 *temporalAabbMin = *((btVector3 **)dub_checksdata(L, 6, "bt.Vector3"));
    btVector3 *temporalAabbMax = *((btVector3 **)dub_checksdata(L, 7, "bt.Vector3"));
    self->calculateTemporalAabb(*curTrans, *linvel, *angvel, timeStep, *temporalAabbMin, *temporalAabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateTemporalAabb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateTemporalAabb: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionShape::isPolyhedral() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:63
 */
static int btConvexShape_isPolyhedral(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushboolean(L, self->isPolyhedral());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isPolyhedral: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isPolyhedral: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionShape::isConvex2d() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:68
 */
static int btConvexShape_isConvex2d(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushboolean(L, self->isConvex2d());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isConvex2d: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isConvex2d: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionShape::isConvex() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:73
 */
static int btConvexShape_isConvex(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushboolean(L, self->isConvex());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isConvex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isConvex: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionShape::isNonMoving() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:77
 */
static int btConvexShape_isNonMoving(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushboolean(L, self->isNonMoving());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isNonMoving: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isNonMoving: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionShape::isConcave() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:81
 */
static int btConvexShape_isConcave(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushboolean(L, self->isConcave());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isConcave: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isConcave: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionShape::isCompound() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:85
 */
static int btConvexShape_isCompound(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushboolean(L, self->isCompound());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isCompound: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isCompound: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionShape::isSoftBody() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:90
 */
static int btConvexShape_isSoftBody(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushboolean(L, self->isSoftBody());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isSoftBody: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isSoftBody: Unknown exception");
  }
  return dub_error(L);
}

/** bool btCollisionShape::isInfinite() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:96
 */
static int btConvexShape_isInfinite(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushboolean(L, self->isInfinite());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isInfinite: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isInfinite: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionShape::calculateLocalInertia(btScalar mass, btVector3 &inertia) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:103
 */
static int btConvexShape_calculateLocalInertia(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btScalar mass = dub_checknumber(L, 2);
    btVector3 *inertia = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    self->calculateLocalInertia(mass, *inertia);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateLocalInertia: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateLocalInertia: Unknown exception");
  }
  return dub_error(L);
}

/** virtual const char* btCollisionShape::getName() const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:107
 */
static int btConvexShape_getName(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushstring(L, self->getName());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getName: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getName: Unknown exception");
  }
  return dub_error(L);
}

/** int btCollisionShape::getShapeType() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:111
 */
static int btConvexShape_getShapeType(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushnumber(L, self->getShapeType());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getShapeType: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getShapeType: Unknown exception");
  }
  return dub_error(L);
}

/** virtual btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:116
 */
static int btConvexShape_getAnisotropicRollingFrictionDirection(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    dub_pushudata(L, new btVector3(self->getAnisotropicRollingFrictionDirection()), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAnisotropicRollingFrictionDirection: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAnisotropicRollingFrictionDirection: Unknown exception");
  }
  return dub_error(L);
}

/** void btCollisionShape::setUserPointer(void *userPtr)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:125
 */
static int btConvexShape_setUserPointer(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    void *userPtr = *((void **)dub_checksdata(L, 2, "void"));
    self->setUserPointer(userPtr);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setUserPointer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setUserPointer: Unknown exception");
  }
  return dub_error(L);
}

/** void* btCollisionShape::getUserPointer() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:130
 */
static int btConvexShape_getUserPointer(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    self->getUserPointer();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getUserPointer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getUserPointer: Unknown exception");
  }
  return dub_error(L);
}

/** int btCollisionShape::calculateSerializeBufferSize() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:134
 */
static int btConvexShape_calculateSerializeBufferSize(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    lua_pushnumber(L, self->calculateSerializeBufferSize());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateSerializeBufferSize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateSerializeBufferSize: Unknown exception");
  }
  return dub_error(L);
}

/** virtual const char* btCollisionShape::serialize(void *dataBuffer, btSerializer *serializer) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:137
 */
static int btConvexShape_serialize(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    void *dataBuffer = *((void **)dub_checksdata(L, 2, "void"));
    btSerializer *serializer = *((btSerializer **)dub_checksdata(L, 3, "Serializer"));
    lua_pushstring(L, self->serialize(dataBuffer, serializer));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "serialize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "serialize: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btCollisionShape::serializeSingleShape(btSerializer *serializer) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:139
 */
static int btConvexShape_serializeSingleShape(lua_State *L) {
  try {
    btConvexShape *self = *((btConvexShape **)dub_checksdata(L, 1, "bt.ConvexShape"));
    btSerializer *serializer = *((btSerializer **)dub_checksdata(L, 2, "Serializer"));
    self->serializeSingleShape(serializer);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "serializeSingleShape: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "serializeSingleShape: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int btConvexShape___tostring(lua_State *L) {
  btConvexShape *self = *((btConvexShape **)dub_checksdata_n(L, 1, "bt.ConvexShape"));
  lua_pushfstring(L, "bt.ConvexShape: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btConvexShape_member_methods[] = {
  { "_cast_"       , btConvexShape__cast_ },
  { "__gc"         , btConvexShape__btConvexShape },
  { "localGetSupportingVertex", btConvexShape_localGetSupportingVertex },
  { "localGetSupportingVertexWithoutMargin", btConvexShape_localGetSupportingVertexWithoutMargin },
  { "localGetSupportVertexWithoutMarginNonVirtual", btConvexShape_localGetSupportVertexWithoutMarginNonVirtual },
  { "localGetSupportVertexNonVirtual", btConvexShape_localGetSupportVertexNonVirtual },
  { "getMarginNonVirtual", btConvexShape_getMarginNonVirtual },
  { "getAabbNonVirtual", btConvexShape_getAabbNonVirtual },
  { "project"      , btConvexShape_project },
  { "batchedUnitVectorGetSupportingVertexWithoutMargin", btConvexShape_batchedUnitVectorGetSupportingVertexWithoutMargin },
  { "getAabb"      , btConvexShape_getAabb },
  { "getAabbSlow"  , btConvexShape_getAabbSlow },
  { "setLocalScaling", btConvexShape_setLocalScaling },
  { "getLocalScaling", btConvexShape_getLocalScaling },
  { "setMargin"    , btConvexShape_setMargin },
  { "getMargin"    , btConvexShape_getMargin },
  { "getNumPreferredPenetrationDirections", btConvexShape_getNumPreferredPenetrationDirections },
  { "getPreferredPenetrationDirection", btConvexShape_getPreferredPenetrationDirection },
  { "getBoundingSphere", btConvexShape_getBoundingSphere },
  { "getAngularMotionDisc", btConvexShape_getAngularMotionDisc },
  { "getContactBreakingThreshold", btConvexShape_getContactBreakingThreshold },
  { "calculateTemporalAabb", btConvexShape_calculateTemporalAabb },
  { "isPolyhedral" , btConvexShape_isPolyhedral },
  { "isConvex2d"   , btConvexShape_isConvex2d },
  { "isConvex"     , btConvexShape_isConvex },
  { "isNonMoving"  , btConvexShape_isNonMoving },
  { "isConcave"    , btConvexShape_isConcave },
  { "isCompound"   , btConvexShape_isCompound },
  { "isSoftBody"   , btConvexShape_isSoftBody },
  { "isInfinite"   , btConvexShape_isInfinite },
  { "calculateLocalInertia", btConvexShape_calculateLocalInertia },
  { "getName"      , btConvexShape_getName },
  { "getShapeType" , btConvexShape_getShapeType },
  { "getAnisotropicRollingFrictionDirection", btConvexShape_getAnisotropicRollingFrictionDirection },
  { "setUserPointer", btConvexShape_setUserPointer },
  { "getUserPointer", btConvexShape_getUserPointer },
  { "calculateSerializeBufferSize", btConvexShape_calculateSerializeBufferSize },
  { "serialize"    , btConvexShape_serialize },
  { "serializeSingleShape", btConvexShape_serializeSingleShape },
  { "__tostring"   , btConvexShape___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_bt_ConvexShape(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.ConvexShape");
  // <mt>

  // register member methods
  luaL_register(L, NULL, btConvexShape_member_methods);
  // save meta-table in bt
  dub_register(L, "bt", "ConvexShape", "ConvexShape");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
