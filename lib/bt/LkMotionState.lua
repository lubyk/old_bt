--[[------------------------------------------------------

  bt.LkMotionState
  ----------------

  btMotionState with Lua callbacks.

--]]------------------------------------------------------
local lib = bt.LkMotionState_core
bt.LkMotionState = lib

local new = lib.new
function lib.new(transform, vect)
  local self = new()
  if vect then
    transform = bt.Transform(transform, vect)
  end
  if transform then
    self.transform = transform
  end
  return self
end

--=============================================== Default callback implementations
function lib:getWorldTransform(worldTrans)
  local transform = self.transform
  if transform then
    worldTrans:set(transform)
  end
end

function lib:setWorldTransform(worldTrans)
  local transform = self.transform
  if transform then
    transform:set(worldTrans)
  end
end
