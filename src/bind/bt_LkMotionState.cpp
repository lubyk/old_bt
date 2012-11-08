/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class LkMotionState
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "/Users/gaspard/git/lubyk/modules/bt/include/LkMotionState.h"


/** Cast (class_name)
 * 
 */
static int LkMotionState__cast_(lua_State *L) {

  LkMotionState *self = *((LkMotionState **)dub_checksdata_n(L, 1, "bt.LkMotionState"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.MotionState")) break;
      *retval__ = static_cast<btMotionState *>(self);
      return 1;
    }
  }
  return 0;
}

/** LkMotionState()
 * 
 */
static int LkMotionState_LkMotionState(lua_State *L) {
  try {
    LkMotionState *retval__ = new LkMotionState();
    retval__->pushobject(L, retval__, "bt.LkMotionState", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "LkMotionState: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "LkMotionState: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btMotionState::getWorldTransform(btTransform &worldTrans) const =0
 * src/vendor/bullet/src/LinearMath/btMotionState.h:32
 */
static int LkMotionState_getWorldTransform(lua_State *L) {
  try {
    LkMotionState *self = *((LkMotionState **)dub_checksdata(L, 1, "bt.LkMotionState"));
    btTransform *worldTrans = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    self->getWorldTransform(*worldTrans);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getWorldTransform: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getWorldTransform: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void btMotionState::setWorldTransform(const btTransform &worldTrans)=0
 * src/vendor/bullet/src/LinearMath/btMotionState.h:35
 */
static int LkMotionState_setWorldTransform(lua_State *L) {
  try {
    LkMotionState *self = *((LkMotionState **)dub_checksdata(L, 1, "bt.LkMotionState"));
    btTransform *worldTrans = *((btTransform **)dub_checksdata(L, 2, "bt.Transform"));
    self->setWorldTransform(*worldTrans);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setWorldTransform: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setWorldTransform: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int LkMotionState___tostring(lua_State *L) {
  LkMotionState *self = *((LkMotionState **)dub_checksdata_n(L, 1, "bt.LkMotionState"));
  lua_pushfstring(L, "bt.LkMotionState: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg LkMotionState_member_methods[] = {
  { "_cast_"       , LkMotionState__cast_ },
  { "new"          , LkMotionState_LkMotionState },
  { "getWorldTransform", LkMotionState_getWorldTransform },
  { "setWorldTransform", LkMotionState_setWorldTransform },
  { "__tostring"   , LkMotionState___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_bt_LkMotionState(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.LkMotionState");
  // <mt>

  // register member methods
  luaL_register(L, NULL, LkMotionState_member_methods);
  // save meta-table in bt
  dub_register(L, "bt", "LkMotionState_core", "LkMotionState");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
