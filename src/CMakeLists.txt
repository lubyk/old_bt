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
include_directories(vendor/bullet/Demos/OpenGL)
set(MODULE_SOURCES ${MODULE_SOURCES}
  vendor/bullet/Demos/OpenGL/GLDebugFont.cpp
	vendor/bullet/Demos/OpenGL/GLDebugDrawer.cpp
)
#	vendor/bullet/Demos/OpenGL/GL_DialogDynamicsWorld.cpp
#	vendor/bullet/Demos/OpenGL/GL_ShapeDrawer.cpp
#	vendor/bullet/Demos/OpenGL/GlutStuff.cpp

add_library(${target} MODULE ${MODULE_SOURCES})
set_target_properties(${target}
  PROPERTIES OUTPUT_NAME core
  LINK_FLAGS ${PLAT_OBJ_FLAGS}
  PREFIX ""
  SUFFIX ".so"
)                                                         
# BulletWorldImporter 
target_link_libraries(${target} BulletSoftBody BulletDynamics BulletCollision LinearMath)
if(LINUX)
else(LINUX)
  target_link_libraries(${target} BulletMultiThreaded MiniCL)
endif(LINUX)

# OpenGL stuff
target_link_libraries(${target} ${GLUT_glut_LIBRARY} ${OPENGL_gl_LIBRARY} ${OPENGL_glu_LIBRARY})

add_dependencies(${MODULE_NAME} ${target})

# --------------------------------------------------------------
#  install bt/core.so
# --------------------------------------------------------------
install(TARGETS ${target}
  DESTINATION ${LUBYK_LIB}/lib/${MODULE_NAME}
)

