# --------------------------------------------------------------
#  bt
#
#  provides:
#    bt.lua
#    bt/core.so
# --------------------------------------------------------------
cmake_minimum_required(VERSION 2.8)
set(MODULE_NAME bt)

# --------------------------------------------------------------
#  common lubyk build settings
# --------------------------------------------------------------
if(NOT LUBYK)
  include(CMakeLubyk.txt)
endif(NOT LUBYK)   

# --------------------------------------------------------------
#  bt
# --------------------------------------------------------------
add_custom_target(${MODULE_NAME} true)

# --------------------------------------------------------------
#  bt_core
# --------------------------------------------------------------
include_directories(include)
add_subdirectory(src)

# --------------------------------------------------------------
#  bt_bind                                   
# --------------------------------------------------------------
file(GLOB MODULE_HEADERS include/${MODULE_NAME}/*.h bind/*.h)
add_custom_target("${MODULE_NAME}_bind"
  COMMAND lua bind.lua
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  DEPENDS ${MODULE_HEADERS} bind.lua)

# --------------------------------------------------------------
#  install                                     
# --------------------------------------------------------------
install(DIRECTORY lib
  DESTINATION ${LUBYK_LIB}
)
