--[[------------------------------------------------------

  bt.LkDebugDrawer
  ----------------

  btDebugDrawer with Lua callbacks.

--]]------------------------------------------------------
local lib = bt.LkDebugDrawer_core
bt.LkDebugDrawer = lib

function lib:drawLine(from, to, fromColor, toColor)
  error("'drawLine' callback not implemented in Debug Drawer.")
end

function lib:reportErrorWarning(msg)
  print(msg)
end
