--[[------------------------------------------------------

  bt
  --

  Bullet Physics Lua bindings.

--]]------------------------------------------------------
dummy = Autoload('bt')
require 'bt.core'

-- FIXME: When an operator is defined in global namespace with Vector3 as
-- first argument, it should be inserted inside the class definition.
bt.Transform.__eq  = bt.__eq
bt.Vector3.__add = bt.__add
bt.Vector3.__sub = bt.__sub
bt.Vector3.__mul = bt.__mul
bt.Vector3.__div = bt.__div

function bt.Vector3:__tostring()
  return string.format('[%f, %f, %f]', self:x(),self:y(), self:z())
end
