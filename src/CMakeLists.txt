# --------------------------------------------------------------
#  bt_core
#  
#  expects:
#    MODULE_NAME defined in the CMakeLists for the module
#
#  provides:
#    bt/core.so
# --------------------------------------------------------------

# --------------------------------------------------------------
#  Bullet Physics
# --------------------------------------------------------------
add_subdirectory(vendor)

# --------------------------------------------------------------
#  bt_core                                            bt/core.so
# --------------------------------------------------------------
set(target "${MODULE_NAME}_core")

file(GLOB MODULE_SOURCES *.cpp bind/*.cpp bind/dub/*.cpp)
include_directories(bind)
include_directories(vendor/bullet/src)

add_library(${target} MODULE ${MODULE_SOURCES})
set_target_properties(${target}
  PROPERTIES OUTPUT_NAME core
  LINK_FLAGS ${PLAT_OBJ_FLAGS}
  PREFIX ""
  SUFFIX ".so"
)                                                         
# BulletWorldImporter 
target_link_libraries(${target} BulletMultiThreaded MiniCL BulletSoftBody BulletDynamics BulletCollision LinearMath)
add_dependencies(${MODULE_NAME} ${target})

# --------------------------------------------------------------
#  install bt/core.so
# --------------------------------------------------------------
install(TARGETS ${target}
  DESTINATION ${LUBYK_LIB}/lib/${MODULE_NAME}
)

