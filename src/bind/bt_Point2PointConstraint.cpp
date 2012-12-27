/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btPoint2PointConstraint
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h"


/** ~btPoint2PointConstraint()
 * 
 */
static int btPoint2PointConstraint__btPoint2PointConstraint(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "bt.Point2PointConstraint"));
    if (userdata->gc) {
      btPoint2PointConstraint *self = (btPoint2PointConstraint *)userdata->ptr;
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
static int btPoint2PointConstraint__cast_(lua_State *L) {

  btPoint2PointConstraint *self = *((btPoint2PointConstraint **)dub_checksdata_n(L, 1, "bt.Point2PointConstraint"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.TypedConstraint")) break;
      *retval__ = static_cast<btTypedConstraint *>(self);
      return 1;
    }
  }
  return 0;
}

/** btPoint2PointConstraint::btPoint2PointConstraint(btRigidBody &rbA, btRigidBody &rbB, const btVector3 &pivotInA, const btVector3 &pivotInB)
 * bind/btPoint2PointConstraint.h:5
 */
static int btPoint2PointConstraint_btPoint2PointConstraint(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      btRigidBody *rbA = *((btRigidBody **)dub_checksdata(L, 1, "bt.RigidBody"));
      btRigidBody *rbB = *((btRigidBody **)dub_checksdata(L, 2, "bt.RigidBody"));
      btVector3 *pivotInA = *((btVector3 **)dub_checksdata(L, 3, "bt.Vector3"));
      btVector3 *pivotInB = *((btVector3 **)dub_checksdata(L, 4, "bt.Vector3"));
      btPoint2PointConstraint *retval__ = new btPoint2PointConstraint(*rbA, *rbB, *pivotInA, *pivotInB);
      dub_pushudata(L, retval__, "bt.Point2PointConstraint", true);
      return 1;
    } else {
      btRigidBody *rbA = *((btRigidBody **)dub_checksdata(L, 1, "bt.RigidBody"));
      btVector3 *pivotInA = *((btVector3 **)dub_checksdata(L, 2, "bt.Vector3"));
      btPoint2PointConstraint *retval__ = new btPoint2PointConstraint(*rbA, *pivotInA);
      dub_pushudata(L, retval__, "bt.Point2PointConstraint", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int btPoint2PointConstraint___tostring(lua_State *L) {
  btPoint2PointConstraint *self = *((btPoint2PointConstraint **)dub_checksdata_n(L, 1, "bt.Point2PointConstraint"));
  lua_pushfstring(L, "bt.Point2PointConstraint: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btPoint2PointConstraint_member_methods[] = {
  { "__gc"         , btPoint2PointConstraint__btPoint2PointConstraint },
  { "_cast_"       , btPoint2PointConstraint__cast_ },
  { "new"          , btPoint2PointConstraint_btPoint2PointConstraint },
  { "__tostring"   , btPoint2PointConstraint___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_bt_Point2PointConstraint(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.Point2PointConstraint");
  // <mt>

  // register member methods
  luaL_register(L, NULL, btPoint2PointConstraint_member_methods);
  // save meta-table in bt
  dub_register(L, "bt", "Point2PointConstraint", "Point2PointConstraint");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
