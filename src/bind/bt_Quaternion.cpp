/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btQuaternion
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "LinearMath/btQuaternion.h"


/** ~btQuaternion()
 * 
 */
static int btQuaternion__btQuaternion(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "bt.Quaternion"));
    if (userdata->gc) {
      btQuaternion *self = (btQuaternion *)userdata->ptr;
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

/** Cast (class_name)
 * 
 */
static int btQuaternion__cast_(lua_State *L) {

  btQuaternion *self = *((btQuaternion **)dub_checksdata_n(L, 1, "bt.Quaternion"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.QuadWord")) break;
      *retval__ = static_cast<btQuadWord *>(self);
      return 1;
    }
  }
  return 0;
}

/** btQuaternion::btQuaternion()
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:45
 */
static int btQuaternion_btQuaternion(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      btScalar _x = dub_checknumber(L, 1);
      btScalar _y = dub_checknumber(L, 2);
      btScalar _z = dub_checknumber(L, 3);
      btScalar _w = dub_checknumber(L, 4);
      btQuaternion *retval__ = new btQuaternion(_x, _y, _z, _w);
      dub_pushudata(L, retval__, "bt.Quaternion", true);
      return 1;
    } else if (top__ >= 3) {
      btScalar yaw = dub_checknumber(L, 1);
      btScalar pitch = dub_checknumber(L, 2);
      btScalar roll = dub_checknumber(L, 3);
      btQuaternion *retval__ = new btQuaternion(yaw, pitch, roll);
      dub_pushudata(L, retval__, "bt.Quaternion", true);
      return 1;
    } else if (top__ >= 2) {
      btVector3 *_axis = *((btVector3 **)dub_checksdata(L, 1, "bt.Vector3"));
      btScalar _angle = dub_checknumber(L, 2);
      btQuaternion *retval__ = new btQuaternion(*_axis, _angle);
      dub_pushudata(L, retval__, "bt.Quaternion", true);
      return 1;
    } else {
      btQuaternion *retval__ = new btQuaternion();
      dub_pushudata(L, retval__, "bt.Quaternion", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuaternion::setRotation(const btVector3 &axis, const btScalar &_angle)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:100
 */
static int btQuaternion_setRotation(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btVector3 *axis = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
    btScalar _angle = dub_checknumber(L, 3);
    self->setRotation(*axis, _angle);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setRotation: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setRotation: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuaternion::setEuler(const btScalar &yaw, const btScalar &pitch, const btScalar &roll)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:112
 */
static int btQuaternion_setEuler(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar yaw = dub_checknumber(L, 2);
    btScalar pitch = dub_checknumber(L, 3);
    btScalar roll = dub_checknumber(L, 4);
    self->setEuler(yaw, pitch, roll);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setEuler: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setEuler: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuaternion::setEulerZYX(const btScalar &yaw, const btScalar &pitch, const btScalar &roll)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:132
 */
static int btQuaternion_setEulerZYX(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar yaw = dub_checknumber(L, 2);
    btScalar pitch = dub_checknumber(L, 3);
    btScalar roll = dub_checknumber(L, 4);
    self->setEulerZYX(yaw, pitch, roll);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setEulerZYX: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setEulerZYX: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion& btQuaternion::operator+=(const btQuaternion &q)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:150
 */
static int btQuaternion_operator_adde(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    dub_pushudata(L, &self->operator+=(*q), "bt.Quaternion", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "add: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "add: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion& btQuaternion::operator-=(const btQuaternion &q)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:167
 */
static int btQuaternion_operator_sube(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    dub_pushudata(L, &self->operator-=(*q), "bt.Quaternion", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "sub: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "sub: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion& btQuaternion::operator*=(const btScalar &s)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:184
 */
static int btQuaternion_operator_mule(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    int type__ = lua_type(L, 2);
    if (type__ == LUA_TNUMBER) {
      btScalar s = dub_checknumber(L, 2);
      dub_pushudata(L, &self->operator*=(s), "bt.Quaternion", false);
      return 1;
    } else {
      btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
      dub_pushudata(L, &self->operator*=(*q), "bt.Quaternion", false);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "mul: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mul: Unknown exception");
  }
  return dub_error(L);
}

/** btScalar btQuaternion::dot(const btQuaternion &q) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:287
 */
static int btQuaternion_dot(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    lua_pushnumber(L, self->dot(*q));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "dot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "dot: Unknown exception");
  }
  return dub_error(L);
}

/** btScalar btQuaternion::length2() const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:314
 */
static int btQuaternion_length2(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->length2());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "length2: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "length2: Unknown exception");
  }
  return dub_error(L);
}

/** btScalar btQuaternion::length() const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:320
 */
static int btQuaternion_length(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->length());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "length: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "length: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion& btQuaternion::normalize()
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:327
 */
static int btQuaternion_normalize(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    dub_pushudata(L, &self->normalize(), "bt.Quaternion", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "normalize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "normalize: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::operator*(const btScalar &s) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:353
 */
static int btQuaternion_operator_mul(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar s = dub_checknumber(L, 2);
    dub_pushudata(L, new btQuaternion(self->operator*(s)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__mul: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__mul: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::operator/(const btScalar &s) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:369
 */
static int btQuaternion_operator_div(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar s = dub_checknumber(L, 2);
    dub_pushudata(L, new btQuaternion(self->operator/(s)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__div: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__div: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion& btQuaternion::operator/=(const btScalar &s)
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:377
 */
static int btQuaternion_operator_dive(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar s = dub_checknumber(L, 2);
    dub_pushudata(L, &self->operator/=(s), "bt.Quaternion", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "div: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "div: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::normalized() const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:384
 */
static int btQuaternion_normalized(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    dub_pushudata(L, new btQuaternion(self->normalized()), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "normalized: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "normalized: Unknown exception");
  }
  return dub_error(L);
}

/** btScalar btQuaternion::angle(const btQuaternion &q) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:390
 */
static int btQuaternion_angle(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    lua_pushnumber(L, self->angle(*q));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "angle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "angle: Unknown exception");
  }
  return dub_error(L);
}

/** btScalar btQuaternion::getAngle() const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:397
 */
static int btQuaternion_getAngle(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->getAngle());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAngle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAngle: Unknown exception");
  }
  return dub_error(L);
}

/** btVector3 btQuaternion::getAxis() const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:404
 */
static int btQuaternion_getAxis(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    dub_pushudata(L, new btVector3(self->getAxis()), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAxis: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAxis: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::inverse() const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:415
 */
static int btQuaternion_inverse(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    dub_pushudata(L, new btQuaternion(self->inverse()), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "inverse: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "inverse: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::operator+(const btQuaternion &q2) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:429
 */
static int btQuaternion_operator_add(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q2 = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    dub_pushudata(L, new btQuaternion(self->operator+(*q2)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__add: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__add: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::operator-(const btQuaternion &q2) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:444
 */
static int btQuaternion_operator_sub(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q2 = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    dub_pushudata(L, new btQuaternion(self->operator-(*q2)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__sub: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__sub: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::operator-() const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:458
 */
static int btQuaternion_operator_unm(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    dub_pushudata(L, new btQuaternion(self->operator- ()), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__unm: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__unm: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::farthest(const btQuaternion &qd) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:470
 */
static int btQuaternion_farthest(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *qd = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    dub_pushudata(L, new btQuaternion(self->farthest(*qd)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "farthest: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "farthest: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::nearest(const btQuaternion &qd) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:481
 */
static int btQuaternion_nearest(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *qd = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    dub_pushudata(L, new btQuaternion(self->nearest(*qd)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "nearest: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "nearest: Unknown exception");
  }
  return dub_error(L);
}

/** btQuaternion btQuaternion::slerp(const btQuaternion &q, const btScalar &t) const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:496
 */
static int btQuaternion_slerp(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuaternion *q = *((btQuaternion **)dub_checksdata(L, 2, "bt.Quaternion"));
    btScalar t = dub_checknumber(L, 3);
    dub_pushudata(L, new btQuaternion(self->slerp(*q, t)), "bt.Quaternion", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "slerp: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "slerp: Unknown exception");
  }
  return dub_error(L);
}

/** const btScalar& btQuaternion::getW() const
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:529
 */
static int btQuaternion_getW(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->getW());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getW: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getW: Unknown exception");
  }
  return dub_error(L);
}

/** static const btQuaternion& btQuaternion::getIdentity()
 * src/vendor/bullet/src/LinearMath/btQuaternion.h:524
 */
static int btQuaternion_getIdentity(lua_State *L) {
  try {
    dub_pushudata(L, const_cast<btQuaternion*>(&btQuaternion::getIdentity()), "bt.Quaternion", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getIdentity: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getIdentity: Unknown exception");
  }
  return dub_error(L);
}

/** const btScalar& btQuadWord::getX() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:102
 */
static int btQuaternion_getX(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->getX());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getX: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getX: Unknown exception");
  }
  return dub_error(L);
}

/** const btScalar& btQuadWord::getY() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:104
 */
static int btQuaternion_getY(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->getY());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getY: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getY: Unknown exception");
  }
  return dub_error(L);
}

/** const btScalar& btQuadWord::getZ() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:106
 */
static int btQuaternion_getZ(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->getZ());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getZ: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getZ: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuadWord::setX(btScalar _x)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:108
 */
static int btQuaternion_setX(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar _x = dub_checknumber(L, 2);
    self->setX(_x);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setX: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setX: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuadWord::setY(btScalar _y)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:110
 */
static int btQuaternion_setY(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar _y = dub_checknumber(L, 2);
    self->setY(_y);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setY: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setY: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuadWord::setZ(btScalar _z)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:112
 */
static int btQuaternion_setZ(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar _z = dub_checknumber(L, 2);
    self->setZ(_z);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setZ: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setZ: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuadWord::setW(btScalar _w)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:114
 */
static int btQuaternion_setW(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btScalar _w = dub_checknumber(L, 2);
    self->setW(_w);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setW: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setW: Unknown exception");
  }
  return dub_error(L);
}

/** const btScalar& btQuadWord::x() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:116
 */
static int btQuaternion_x(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->x());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "x: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "x: Unknown exception");
  }
  return dub_error(L);
}

/** const btScalar& btQuadWord::y() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:118
 */
static int btQuaternion_y(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->y());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "y: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "y: Unknown exception");
  }
  return dub_error(L);
}

/** const btScalar& btQuadWord::z() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:120
 */
static int btQuaternion_z(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->z());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "z: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "z: Unknown exception");
  }
  return dub_error(L);
}

/** const btScalar& btQuadWord::w() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:122
 */
static int btQuaternion_w(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    lua_pushnumber(L, self->w());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "w: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "w: Unknown exception");
  }
  return dub_error(L);
}

/** bool btQuadWord::operator==(const btQuadWord &other) const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:131
 */
static int btQuaternion_operator_eq(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuadWord *other = *((btQuadWord **)dub_checksdata(L, 2, "bt.QuadWord"));
    lua_pushboolean(L, self->operator==(*other));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__eq: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__eq: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuadWord::setValue(const btScalar &_x, const btScalar &_y, const btScalar &_z)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:153
 */
static int btQuaternion_setValue(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      btScalar _x = dub_checknumber(L, 2);
      btScalar _y = dub_checknumber(L, 3);
      btScalar _z = dub_checknumber(L, 4);
      btScalar _w = dub_checknumber(L, 5);
      self->setValue(_x, _y, _z, _w);
      return 0;
    } else {
      btScalar _x = dub_checknumber(L, 2);
      btScalar _y = dub_checknumber(L, 3);
      btScalar _z = dub_checknumber(L, 4);
      self->setValue(_x, _y, _z);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "setValue: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setValue: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuadWord::setMax(const btQuadWord &other)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:211
 */
static int btQuaternion_setMax(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuadWord *other = *((btQuadWord **)dub_checksdata(L, 2, "bt.QuadWord"));
    self->setMax(*other);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMax: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMax: Unknown exception");
  }
  return dub_error(L);
}

/** void btQuadWord::setMin(const btQuadWord &other)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:227
 */
static int btQuaternion_setMin(lua_State *L) {
  try {
    btQuaternion *self = *((btQuaternion **)dub_checksdata(L, 1, "bt.Quaternion"));
    btQuadWord *other = *((btQuadWord **)dub_checksdata(L, 2, "bt.QuadWord"));
    self->setMin(*other);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMin: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int btQuaternion___tostring(lua_State *L) {
  btQuaternion *self = *((btQuaternion **)dub_checksdata_n(L, 1, "bt.Quaternion"));
  lua_pushfstring(L, "bt.Quaternion: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btQuaternion_member_methods[] = {
  { "__gc"         , btQuaternion__btQuaternion },
  { "_cast_"       , btQuaternion__cast_  },
  { "new"          , btQuaternion_btQuaternion },
  { "setRotation"  , btQuaternion_setRotation },
  { "setEuler"     , btQuaternion_setEuler },
  { "setEulerZYX"  , btQuaternion_setEulerZYX },
  { "add"          , btQuaternion_operator_adde },
  { "sub"          , btQuaternion_operator_sube },
  { "mul"          , btQuaternion_operator_mule },
  { "dot"          , btQuaternion_dot     },
  { "length2"      , btQuaternion_length2 },
  { "length"       , btQuaternion_length  },
  { "normalize"    , btQuaternion_normalize },
  { "__mul"        , btQuaternion_operator_mul },
  { "__div"        , btQuaternion_operator_div },
  { "div"          , btQuaternion_operator_dive },
  { "normalized"   , btQuaternion_normalized },
  { "angle"        , btQuaternion_angle   },
  { "getAngle"     , btQuaternion_getAngle },
  { "getAxis"      , btQuaternion_getAxis },
  { "inverse"      , btQuaternion_inverse },
  { "__add"        , btQuaternion_operator_add },
  { "__sub"        , btQuaternion_operator_sub },
  { "__unm"        , btQuaternion_operator_unm },
  { "farthest"     , btQuaternion_farthest },
  { "nearest"      , btQuaternion_nearest },
  { "slerp"        , btQuaternion_slerp   },
  { "getW"         , btQuaternion_getW    },
  { "getIdentity"  , btQuaternion_getIdentity },
  { "getX"         , btQuaternion_getX    },
  { "getY"         , btQuaternion_getY    },
  { "getZ"         , btQuaternion_getZ    },
  { "setX"         , btQuaternion_setX    },
  { "setY"         , btQuaternion_setY    },
  { "setZ"         , btQuaternion_setZ    },
  { "setW"         , btQuaternion_setW    },
  { "x"            , btQuaternion_x       },
  { "y"            , btQuaternion_y       },
  { "z"            , btQuaternion_z       },
  { "w"            , btQuaternion_w       },
  { "__eq"         , btQuaternion_operator_eq },
  { "setValue"     , btQuaternion_setValue },
  { "setMax"       , btQuaternion_setMax  },
  { "setMin"       , btQuaternion_setMin  },
  { "__tostring"   , btQuaternion___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_bt_Quaternion(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.Quaternion");
  // <mt>

  // register member methods
  luaL_register(L, NULL, btQuaternion_member_methods);
  // save meta-table in bt
  dub_register(L, "bt", "Quaternion", "Quaternion");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
