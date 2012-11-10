/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for library bt
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "LkMotionState.h"
#include "LkDebugDrawer.h"
#include "BulletCollision/BroadphaseCollision/btBroadphaseInterface.h"
#include "BulletCollision/BroadphaseCollision/btDbvtBroadphase.h"
#include "BulletCollision/BroadphaseCollision/btDispatcher.h"
#include "BulletCollision/CollisionDispatch/btCollisionWorld.h"
#include "BulletCollision/CollisionDispatch/btCollisionConfiguration.h"
#include "BulletCollision/CollisionDispatch/btCollisionDispatcher.h"
#include "BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h"
#include "BulletCollision/CollisionShapes/btCollisionShape.h"
#include "BulletCollision/CollisionShapes/btConcaveShape.h"
#include "BulletCollision/CollisionShapes/btConvexInternalShape.h"
#include "BulletCollision/CollisionShapes/btConvexShape.h"
#include "BulletCollision/CollisionShapes/btSphereShape.h"
#include "BulletCollision/CollisionShapes/btStaticPlaneShape.h"
#include "BulletDynamics/ConstraintSolver/btConstraintSolver.h"
#include "BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h"
#include "BulletDynamics/ConstraintSolver/btTypedConstraint.h"
#include "BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h"
#include "BulletDynamics/ConstraintSolver/btHingeConstraint.h"
#include "BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h"
#include "BulletDynamics/Dynamics/btDynamicsWorld.h"
#include "BulletDynamics/Dynamics/btRigidBody.h"
#include "LinearMath/btDefaultMotionState.h"
#include "LinearMath/btMotionState.h"
#include "LinearMath/btQuadWord.h"
#include "LinearMath/btQuaternion.h"
#include "LinearMath/btTransform.h"
#include "LinearMath/btVector3.h"
#include "LinearMath/btMatrix3x3.h"
#include "LinearMath/btIDebugDraw.h"
#include "GLDebugDrawer.h"
#include "LinearMath/btScalar.h"


extern "C" {
int luaopen_bt_LkMotionState(lua_State *L);
int luaopen_bt_LkDebugDrawer(lua_State *L);
int luaopen_bt_BroadphaseInterface(lua_State *L);
int luaopen_bt_DbvtBroadphase(lua_State *L);
int luaopen_bt_Dispatcher(lua_State *L);
int luaopen_bt_CollisionWorld(lua_State *L);
int luaopen_bt_CollisionConfiguration(lua_State *L);
int luaopen_bt_CollisionDispatcher(lua_State *L);
int luaopen_bt_DefaultCollisionConfiguration(lua_State *L);
int luaopen_bt_CollisionShape(lua_State *L);
int luaopen_bt_ConcaveShape(lua_State *L);
int luaopen_bt_ConvexInternalShape(lua_State *L);
int luaopen_bt_ConvexShape(lua_State *L);
int luaopen_bt_SphereShape(lua_State *L);
int luaopen_bt_StaticPlaneShape(lua_State *L);
int luaopen_bt_ConstraintSolver(lua_State *L);
int luaopen_bt_SequentialImpulseConstraintSolver(lua_State *L);
int luaopen_bt_TypedConstraint(lua_State *L);
int luaopen_bt_Point2PointConstraint(lua_State *L);
int luaopen_bt_HingeConstraint(lua_State *L);
int luaopen_bt_DiscreteDynamicsWorld(lua_State *L);
int luaopen_bt_DynamicsWorld(lua_State *L);
int luaopen_bt_RigidBody(lua_State *L);
int luaopen_bt_RigidBody_RigidBodyConstructionInfo(lua_State *L);
int luaopen_bt_DefaultMotionState(lua_State *L);
int luaopen_bt_MotionState(lua_State *L);
int luaopen_bt_QuadWord(lua_State *L);
int luaopen_bt_Quaternion(lua_State *L);
int luaopen_bt_Transform(lua_State *L);
int luaopen_bt_Vector3(lua_State *L);
int luaopen_bt_Matrix3x3(lua_State *L);
int luaopen_bt_IDebugDraw(lua_State *L);
int luaopen_bt_GLDebugDrawer(lua_State *L);
}

/** btMatrix3x3 operator*(const btMatrix3x3 &m, const btScalar &k)
 * src/vendor/bullet/src/LinearMath/btMatrix3x3.h:854
 */
static int bt_operator_mul(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if (type__ == LUA_TNUMBER) {
      btScalar s = dub_checknumber(L, 1);
      btVector3 *v = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
      dub_pushudata(L, new btVector3(operator*(s, *v)), "bt.Vector3", true);
      return 1;
    } else if ( (ptr1__ = dub_issdata(L, 1, "bt.Vector3", type__)) ) {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if (type__ == LUA_TNUMBER) {
        btVector3 *v = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
        btScalar s = dub_checknumber(L, 2);
        dub_pushudata(L, new btVector3(operator*(*v, s)), "bt.Vector3", true);
        return 1;
      } else if ( (ptr2__ = dub_issdata(L, 2, "bt.Vector3", type__)) ) {
        btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
        btVector3 *v2 = *((btVector3 **)ptr2__);
        dub_pushudata(L, new btVector3(operator*(*v1, *v2)), "bt.Vector3", true);
        return 1;
      } else if ( (ptr2__ = dub_issdata(L, 2, "bt.Quaternion", type__)) ) {
        btVector3 *w = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
        btQuaternion *q = *((btQuaternion **)ptr2__);
        dub_pushudata(L, new btQuaternion(operator*(*w, *q)), "bt.Quaternion", true);
        return 1;
      } else {
        btVector3 *v = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
        btMatrix3x3 *m = *((btMatrix3x3 **)dub_checksdata(L, 2, "bt.Matrix3x3"));
        dub_pushudata(L, new btVector3(operator*(*v, *m)), "bt.Vector3", true);
        return 1;
      }
    } else if ( (ptr1__ = dub_issdata(L, 1, "bt.Quaternion", type__)) ) {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if ( (ptr2__ = dub_issdata(L, 2, "bt.Vector3", type__)) ) {
        btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
        btVector3 *w = *((btVector3 **)ptr2__);
        dub_pushudata(L, new btQuaternion(operator*(*q, *w)), "bt.Quaternion", true);
        return 1;
      } else {
        btQuaternion *q1 = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
        btQuaternion *q2 = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
        dub_pushudata(L, new btQuaternion(operator*(*q1, *q2)), "bt.Quaternion", true);
        return 1;
      }
    } else {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if (type__ == LUA_TNUMBER) {
        btMatrix3x3 *m = *((btMatrix3x3 **)dub_checksdata(L, 1, "bt.Matrix3x3"));
        btScalar k = dub_checknumber(L, 2);
        dub_pushudata(L, new btMatrix3x3(operator*(*m, k)), "bt.Matrix3x3", true);
        return 1;
      } else if ( (ptr2__ = dub_issdata(L, 2, "bt.Vector3", type__)) ) {
        btMatrix3x3 *m = *((btMatrix3x3 **)dub_checksdata(L, 1, "bt.Matrix3x3"));
        btVector3 *v = *((btVector3 **)ptr2__);
        dub_pushudata(L, new btVector3(operator*(*m, *v)), "bt.Vector3", true);
        return 1;
      } else {
        btMatrix3x3 *m1 = *((btMatrix3x3 **)dub_checksdata(L, 1, "bt.Matrix3x3"));
        btMatrix3x3 *m2 = *((btMatrix3x3 **)dub_checksdata(L, 2, "bt.Matrix3x3"));
        dub_pushudata(L, new btMatrix3x3(operator*(*m1, *m2)), "bt.Matrix3x3", true);
        return 1;
      }
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.operator*: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.operator*: Unknown exception");
  }
  return lua_error(L);
}

/** btMatrix3x3 operator+(const btMatrix3x3 &m1, const btMatrix3x3 &m2)
 * src/vendor/bullet/src/LinearMath/btMatrix3x3.h:876
 */
static int bt_operator_add(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if ( (ptr1__ = dub_issdata(L, 1, "bt.Matrix3x3", type__)) ) {
      btMatrix3x3 *m1 = *((btMatrix3x3 **)ptr1__);
      btMatrix3x3 *m2 = *((btMatrix3x3 **)dub_checksdata(L, 2, "bt.Matrix3x3"));
      dub_pushudata(L, new btMatrix3x3(operator+(*m1, *m2)), "bt.Matrix3x3", true);
      return 1;
    } else {
      btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
      btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
      dub_pushudata(L, new btVector3(operator+(*v1, *v2)), "bt.Vector3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.operator+: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.operator+: Unknown exception");
  }
  return lua_error(L);
}

/** btMatrix3x3 operator-(const btMatrix3x3 &m1, const btMatrix3x3 &m2)
 * src/vendor/bullet/src/LinearMath/btMatrix3x3.h:900
 */
static int bt_operator_sub(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      int type__ = lua_type(L, 1);
      void **ptr1__;
      if ( (ptr1__ = dub_issdata(L, 1, "bt.Matrix3x3", type__)) ) {
        btMatrix3x3 *m1 = *((btMatrix3x3 **)ptr1__);
        btMatrix3x3 *m2 = *((btMatrix3x3 **)dub_checksdata(L, 2, "bt.Matrix3x3"));
        dub_pushudata(L, new btMatrix3x3(operator-(*m1, *m2)), "bt.Matrix3x3", true);
        return 1;
      } else {
        btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
        btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
        dub_pushudata(L, new btVector3(operator-(*v1, *v2)), "bt.Vector3", true);
        return 1;
      }
    } else {
      btVector3 *v = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
      dub_pushudata(L, new btVector3(operator-(*v)), "bt.Vector3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.operator-: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.operator-: Unknown exception");
  }
  return lua_error(L);
}

/** bool operator==(const btMatrix3x3 &m1, const btMatrix3x3 &m2)
 * src/vendor/bullet/src/LinearMath/btMatrix3x3.h:1294
 */
static int bt_operator_eq(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if ( (ptr1__ = dub_issdata(L, 1, "bt.Matrix3x3", type__)) ) {
      btMatrix3x3 *m1 = *((btMatrix3x3 **)ptr1__);
      btMatrix3x3 *m2 = *((btMatrix3x3 **)dub_checksdata(L, 2, "bt.Matrix3x3"));
      lua_pushboolean(L, operator==(*m1, *m2));
      return 1;
    } else {
      btTransform *t1 = *((btTransform **)dub_checksdata(L, 1, "bt.Transform"));
      btTransform *t2 = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
      lua_pushboolean(L, operator==(*t1, *t2));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.operator==: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.operator==: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar dot(const btQuaternion &q1, const btQuaternion &q2)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:796
 */
static int bt_dot(lua_State *L) {
  try {
    btQuaternion *q1 = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q2 = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    lua_pushnumber(L, dot(*q1, *q2));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.dot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.dot: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar length(const btQuaternion &q)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:804
 */
static int bt_length(lua_State *L) {
  try {
    btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, length(*q));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.length: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.length: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btAngle(const btQuaternion &q1, const btQuaternion &q2)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:811
 */
static int bt_btAngle(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if ( (ptr1__ = dub_issdata(L, 1, "bt.Vector3", type__)) ) {
      btVector3 *v1 = *((btVector3 **)ptr1__);
      btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
      lua_pushnumber(L, btAngle(*v1, *v2));
      return 1;
    } else {
      btQuaternion *q1 = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
      btQuaternion *q2 = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
      lua_pushnumber(L, btAngle(*q1, *q2));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Angle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Angle: Unknown exception");
  }
  return lua_error(L);
}

/** btQuaternion inverse(const btQuaternion &q)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:818
 */
static int bt_inverse(lua_State *L) {
  try {
    btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    dub_pushudata(L, new btQuaternion(inverse(*q)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.inverse: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.inverse: Unknown exception");
  }
  return lua_error(L);
}

/** btQuaternion slerp(const btQuaternion &q1, const btQuaternion &q2, const btScalar &t)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:829
 */
static int bt_slerp(lua_State *L) {
  try {
    btQuaternion *q1 = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q2 = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    btScalar t = dub_checknumber(L, 3);
    dub_pushudata(L, new btQuaternion(slerp(*q1, *q2, t)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.slerp: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.slerp: Unknown exception");
  }
  return lua_error(L);
}

/** btVector3 quatRotate(const btQuaternion &rotation, const btVector3 &v)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:835
 */
static int bt_quatRotate(lua_State *L) {
  try {
    btQuaternion *rotation = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btVector3 *v = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    dub_pushudata(L, new btVector3(quatRotate(*rotation, *v)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.quatRotate: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.quatRotate: Unknown exception");
  }
  return lua_error(L);
}

/** btQuaternion shortestArcQuat(const btVector3 &v0, const btVector3 &v1)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:849
 */
static int bt_shortestArcQuat(lua_State *L) {
  try {
    btVector3 *v0 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    dub_pushudata(L, new btQuaternion(shortestArcQuat(*v0, *v1)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.shortestArcQuat: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.shortestArcQuat: Unknown exception");
  }
  return lua_error(L);
}

/** btQuaternion shortestArcQuatNormalize2(btVector3 &v0, btVector3 &v1)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:868
 */
static int bt_shortestArcQuatNormalize2(lua_State *L) {
  try {
    btVector3 *v0 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    dub_pushudata(L, new btQuaternion(shortestArcQuatNormalize2(*v0, *v1)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.shortestArcQuatNormalize2: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.shortestArcQuatNormalize2: Unknown exception");
  }
  return lua_error(L);
}

/** int btGetVersion()
 * src/vendor/bullet/src/LinearMath/btScalar.h:34
 */
static int bt_btGetVersion(lua_State *L) {
  try {
    lua_pushnumber(L, btGetVersion());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.GetVersion: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.GetVersion: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btSqrt(btScalar y)
 * src/vendor/bullet/src/LinearMath/btScalar.h:360
 */
static int bt_btSqrt(lua_State *L) {
  try {
    btScalar y = dub_checknumber(L, 1);
    lua_pushnumber(L, btSqrt(y));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Sqrt: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Sqrt: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btFabs(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:379
 */
static int bt_btFabs(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btFabs(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Fabs: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Fabs: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btCos(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:380
 */
static int bt_btCos(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btCos(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Cos: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Cos: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btSin(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:381
 */
static int bt_btSin(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btSin(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Sin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Sin: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btTan(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:382
 */
static int bt_btTan(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btTan(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Tan: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Tan: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btAcos(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:383
 */
static int bt_btAcos(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btAcos(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Acos: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Acos: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btAsin(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:390
 */
static int bt_btAsin(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btAsin(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Asin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Asin: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btAtan(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:397
 */
static int bt_btAtan(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btAtan(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Atan: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Atan: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btAtan2(btScalar x, btScalar y)
 * src/vendor/bullet/src/LinearMath/btScalar.h:398
 */
static int bt_btAtan2(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    btScalar y = dub_checknumber(L, 2);
    lua_pushnumber(L, btAtan2(x, y));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Atan2: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Atan2: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btExp(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:399
 */
static int bt_btExp(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btExp(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Exp: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Exp: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btLog(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:400
 */
static int bt_btLog(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btLog(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Log: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Log: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btPow(btScalar x, btScalar y)
 * src/vendor/bullet/src/LinearMath/btScalar.h:401
 */
static int bt_btPow(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    btScalar y = dub_checknumber(L, 2);
    lua_pushnumber(L, btPow(x, y));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Pow: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Pow: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btFmod(btScalar x, btScalar y)
 * src/vendor/bullet/src/LinearMath/btScalar.h:402
 */
static int bt_btFmod(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    btScalar y = dub_checknumber(L, 2);
    lua_pushnumber(L, btFmod(x, y));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Fmod: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Fmod: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btAtan2Fast(btScalar y, btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:425
 */
static int bt_btAtan2Fast(lua_State *L) {
  try {
    btScalar y = dub_checknumber(L, 1);
    btScalar x = dub_checknumber(L, 2);
    lua_pushnumber(L, btAtan2Fast(y, x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Atan2Fast: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Atan2Fast: Unknown exception");
  }
  return lua_error(L);
}

/** bool btFuzzyZero(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:440
 */
static int bt_btFuzzyZero(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushboolean(L, btFuzzyZero(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.FuzzyZero: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.FuzzyZero: Unknown exception");
  }
  return lua_error(L);
}

/** bool btEqual(btScalar a, btScalar eps)
 * src/vendor/bullet/src/LinearMath/btScalar.h:442
 */
static int bt_btEqual(lua_State *L) {
  try {
    btScalar a = dub_checknumber(L, 1);
    btScalar eps = dub_checknumber(L, 2);
    lua_pushboolean(L, btEqual(a, eps));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Equal: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Equal: Unknown exception");
  }
  return lua_error(L);
}

/** bool btGreaterEqual(btScalar a, btScalar eps)
 * src/vendor/bullet/src/LinearMath/btScalar.h:445
 */
static int bt_btGreaterEqual(lua_State *L) {
  try {
    btScalar a = dub_checknumber(L, 1);
    btScalar eps = dub_checknumber(L, 2);
    lua_pushboolean(L, btGreaterEqual(a, eps));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.GreaterEqual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.GreaterEqual: Unknown exception");
  }
  return lua_error(L);
}

/** int btIsNegative(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:450
 */
static int bt_btIsNegative(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btIsNegative(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.IsNegative: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.IsNegative: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btRadians(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:454
 */
static int bt_btRadians(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btRadians(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Radians: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Radians: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btDegrees(btScalar x)
 * src/vendor/bullet/src/LinearMath/btScalar.h:455
 */
static int bt_btDegrees(lua_State *L) {
  try {
    btScalar x = dub_checknumber(L, 1);
    lua_pushnumber(L, btDegrees(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Degrees: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Degrees: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btFsel(btScalar a, btScalar b, btScalar c)
 * src/vendor/bullet/src/LinearMath/btScalar.h:461
 */
static int bt_btFsel(lua_State *L) {
  try {
    btScalar a = dub_checknumber(L, 1);
    btScalar b = dub_checknumber(L, 2);
    btScalar c = dub_checknumber(L, 3);
    lua_pushnumber(L, btFsel(a, b, c));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Fsel: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Fsel: Unknown exception");
  }
  return lua_error(L);
}

/** bool btMachineIsLittleEndian()
 * src/vendor/bullet/src/LinearMath/btScalar.h:469
 */
static int bt_btMachineIsLittleEndian(lua_State *L) {
  try {
    lua_pushboolean(L, btMachineIsLittleEndian());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.MachineIsLittleEndian: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.MachineIsLittleEndian: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btNormalizeAngle(btScalar angleInRadians)
 * src/vendor/bullet/src/LinearMath/btScalar.h:607
 */
static int bt_btNormalizeAngle(lua_State *L) {
  try {
    btScalar angleInRadians = dub_checknumber(L, 1);
    lua_pushnumber(L, btNormalizeAngle(angleInRadians));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.NormalizeAngle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.NormalizeAngle: Unknown exception");
  }
  return lua_error(L);
}

/** btVector3 operator/(const btVector3 &v, const btScalar &s)
 * src/vendor/bullet/src/LinearMath/btVector3.h:827
 */
static int bt_operator_div(lua_State *L) {
  try {
    int type__ = lua_type(L, 2);
    if (type__ == LUA_TNUMBER) {
      btVector3 *v = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
      btScalar s = dub_checknumber(L, 2);
      dub_pushudata(L, new btVector3(operator/(*v, s)), "bt.Vector3", true);
      return 1;
    } else {
      btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
      btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
      dub_pushudata(L, new btVector3(operator/(*v1, *v2)), "bt.Vector3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.operator/: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.operator/: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btDot(const btVector3 &v1, const btVector3 &v2)
 * src/vendor/bullet/src/LinearMath/btVector3.h:874
 */
static int bt_btDot(lua_State *L) {
  try {
    btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    lua_pushnumber(L, btDot(*v1, *v2));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Dot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Dot: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btDistance2(const btVector3 &v1, const btVector3 &v2)
 * src/vendor/bullet/src/LinearMath/btVector3.h:882
 */
static int bt_btDistance2(lua_State *L) {
  try {
    btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    lua_pushnumber(L, btDistance2(*v1, *v2));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Distance2: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Distance2: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btDistance(const btVector3 &v1, const btVector3 &v2)
 * src/vendor/bullet/src/LinearMath/btVector3.h:890
 */
static int bt_btDistance(lua_State *L) {
  try {
    btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    lua_pushnumber(L, btDistance(*v1, *v2));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Distance: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Distance: Unknown exception");
  }
  return lua_error(L);
}

/** btVector3 btCross(const btVector3 &v1, const btVector3 &v2)
 * src/vendor/bullet/src/LinearMath/btVector3.h:904
 */
static int bt_btCross(lua_State *L) {
  try {
    btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    dub_pushudata(L, new btVector3(btCross(*v1, *v2)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Cross: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Cross: Unknown exception");
  }
  return lua_error(L);
}

/** btScalar btTriple(const btVector3 &v1, const btVector3 &v2, const btVector3 &v3)
 * src/vendor/bullet/src/LinearMath/btVector3.h:910
 */
static int bt_btTriple(lua_State *L) {
  try {
    btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btVector3 *v3 = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
    lua_pushnumber(L, btTriple(*v1, *v2, *v3));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.Triple: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.Triple: Unknown exception");
  }
  return lua_error(L);
}

/** btVector3 lerp(const btVector3 &v1, const btVector3 &v2, const btScalar &t)
 * src/vendor/bullet/src/LinearMath/btVector3.h:920
 */
static int bt_lerp(lua_State *L) {
  try {
    btVector3 *v1 = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btScalar t = dub_checknumber(L, 3);
    dub_pushudata(L, new btVector3(lerp(*v1, *v2, t)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.lerp: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.lerp: Unknown exception");
  }
  return lua_error(L);
}

/** void btSwapScalarEndian(const btScalar &sourceVal, btScalar &destVal)
 * src/vendor/bullet/src/LinearMath/btVector3.h:1218
 */
static int bt_btSwapScalarEndian(lua_State *L) {
  try {
    btScalar sourceVal = dub_checknumber(L, 1);
    btScalar destVal = dub_checknumber(L, 2);
    btSwapScalarEndian(sourceVal, destVal);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.SwapScalarEndian: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.SwapScalarEndian: Unknown exception");
  }
  return lua_error(L);
}

/** void btSwapVector3Endian(const btVector3 &sourceVec, btVector3 &destVec)
 * src/vendor/bullet/src/LinearMath/btVector3.h:1241
 */
static int bt_btSwapVector3Endian(lua_State *L) {
  try {
    btVector3 *sourceVec = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btVector3 *destVec = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btSwapVector3Endian(*sourceVec, *destVec);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.SwapVector3Endian: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.SwapVector3Endian: Unknown exception");
  }
  return lua_error(L);
}

/** void btUnSwapVector3Endian(btVector3 &vector)
 * src/vendor/bullet/src/LinearMath/btVector3.h:1251
 */
static int bt_btUnSwapVector3Endian(lua_State *L) {
  try {
    btVector3 *vector = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
    btUnSwapVector3Endian(*vector);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bt.UnSwapVector3Endian: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bt.UnSwapVector3Endian: Unknown exception");
  }
  return lua_error(L);
}

// --=============================================== FUNCTIONS
static const struct luaL_Reg bt_functions[] = {
  { "__mul"        , bt_operator_mul      },
  { "__add"        , bt_operator_add      },
  { "__sub"        , bt_operator_sub      },
  { "__eq"         , bt_operator_eq       },
  { "dot"          , bt_dot               },
  { "length"       , bt_length            },
  { "btAngle"      , bt_btAngle           },
  { "inverse"      , bt_inverse           },
  { "slerp"        , bt_slerp             },
  { "quatRotate"   , bt_quatRotate        },
  { "shortestArcQuat", bt_shortestArcQuat   },
  { "shortestArcQuatNormalize2", bt_shortestArcQuatNormalize2 },
  { "btGetVersion" , bt_btGetVersion      },
  { "btSqrt"       , bt_btSqrt            },
  { "btFabs"       , bt_btFabs            },
  { "btCos"        , bt_btCos             },
  { "btSin"        , bt_btSin             },
  { "btTan"        , bt_btTan             },
  { "btAcos"       , bt_btAcos            },
  { "btAsin"       , bt_btAsin            },
  { "btAtan"       , bt_btAtan            },
  { "btAtan2"      , bt_btAtan2           },
  { "btExp"        , bt_btExp             },
  { "btLog"        , bt_btLog             },
  { "btPow"        , bt_btPow             },
  { "btFmod"       , bt_btFmod            },
  { "btAtan2Fast"  , bt_btAtan2Fast       },
  { "btFuzzyZero"  , bt_btFuzzyZero       },
  { "btEqual"      , bt_btEqual           },
  { "btGreaterEqual", bt_btGreaterEqual    },
  { "btIsNegative" , bt_btIsNegative      },
  { "btRadians"    , bt_btRadians         },
  { "btDegrees"    , bt_btDegrees         },
  { "btFsel"       , bt_btFsel            },
  { "btMachineIsLittleEndian", bt_btMachineIsLittleEndian },
  { "btNormalizeAngle", bt_btNormalizeAngle  },
  { "__div"        , bt_operator_div      },
  { "btDot"        , bt_btDot             },
  { "btDistance2"  , bt_btDistance2       },
  { "btDistance"   , bt_btDistance        },
  { "btCross"      , bt_btCross           },
  { "btTriple"     , bt_btTriple          },
  { "lerp"         , bt_lerp              },
  { "btSwapScalarEndian", bt_btSwapScalarEndian },
  { "btSwapVector3Endian", bt_btSwapVector3Endian },
  { "btUnSwapVector3Endian", bt_btUnSwapVector3Endian },
  { NULL, NULL},
};

// --=============================================== CONSTANTS
static const struct dub_const_Reg bt_const[] = {
  { "PHY_FLOAT"    , PHY_FLOAT            },
  { "PHY_DOUBLE"   , PHY_DOUBLE           },
  { "PHY_INTEGER"  , PHY_INTEGER          },
  { "PHY_SHORT"    , PHY_SHORT            },
  { "PHY_FIXEDPOINT88", PHY_FIXEDPOINT88     },
  { "PHY_UCHAR"    , PHY_UCHAR            },
  { "BT_SIMPLE_DYNAMICS_WORLD", BT_SIMPLE_DYNAMICS_WORLD },
  { "BT_DISCRETE_DYNAMICS_WORLD", BT_DISCRETE_DYNAMICS_WORLD },
  { "BT_CONTINUOUS_DYNAMICS_WORLD", BT_CONTINUOUS_DYNAMICS_WORLD },
  { "BT_SOFT_RIGID_DYNAMICS_WORLD", BT_SOFT_RIGID_DYNAMICS_WORLD },
  { "BT_DISABLE_WORLD_GRAVITY", BT_DISABLE_WORLD_GRAVITY },
  { "BT_ENABLE_GYROPSCOPIC_FORCE", BT_ENABLE_GYROPSCOPIC_FORCE },
  { NULL, 0},
};

extern "C" int luaopen_bt_core(lua_State *L) {
  luaopen_bt_LkMotionState(L);
  luaopen_bt_LkDebugDrawer(L);
  luaopen_bt_BroadphaseInterface(L);
  luaopen_bt_DbvtBroadphase(L);
  luaopen_bt_Dispatcher(L);
  luaopen_bt_CollisionWorld(L);
  luaopen_bt_CollisionConfiguration(L);
  luaopen_bt_CollisionDispatcher(L);
  luaopen_bt_DefaultCollisionConfiguration(L);
  luaopen_bt_CollisionShape(L);
  luaopen_bt_ConcaveShape(L);
  luaopen_bt_ConvexInternalShape(L);
  luaopen_bt_ConvexShape(L);
  luaopen_bt_SphereShape(L);
  luaopen_bt_StaticPlaneShape(L);
  luaopen_bt_ConstraintSolver(L);
  luaopen_bt_SequentialImpulseConstraintSolver(L);
  luaopen_bt_TypedConstraint(L);
  luaopen_bt_Point2PointConstraint(L);
  luaopen_bt_HingeConstraint(L);
  luaopen_bt_DiscreteDynamicsWorld(L);
  luaopen_bt_DynamicsWorld(L);
  luaopen_bt_RigidBody(L);
  luaopen_bt_RigidBody_RigidBodyConstructionInfo(L);
  luaopen_bt_DefaultMotionState(L);
  luaopen_bt_MotionState(L);
  luaopen_bt_QuadWord(L);
  luaopen_bt_Quaternion(L);
  luaopen_bt_Transform(L);
  luaopen_bt_Vector3(L);
  luaopen_bt_Matrix3x3(L);
  luaopen_bt_IDebugDraw(L);
  luaopen_bt_GLDebugDrawer(L);

  // Create the table which will contain all the constants
  lua_getfield(L, LUA_GLOBALSINDEX, "bt");
  if (lua_isnil(L, -1)) {
    // no global table called bt
    lua_pop(L, 1);
    lua_newtable(L);
    // <lib>
    lua_pushvalue(L, -1);
    // <lib> <lib>
    // _G.bt = <lib>
    lua_setglobal(L, "bt");
    // <lib>
  }
  // <lib>
  // register global constants
  dub_register_const(L, bt_const);
  luaL_register(L, NULL, bt_functions);
  // <lib>
  lua_pop(L, 1);
  return 0;
}
