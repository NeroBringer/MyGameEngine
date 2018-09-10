add_executable(windows WIN32  helloengine_d2d.cpp)
target_link_libraries(windows user32 ole32 d2d1)

add_executable(windows_d3d WIN32  helloengine_d3d.cpp)
target_link_libraries(windows_d3d user32 d3d11 d3dcompiler)



find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
if(NOT OPENGL_FOUND)
    message(ERROR " OPENGL not found!")
endif(NOT OPENGL_FOUND)

add_executable(windows_opengl WIN32  helloengine_opengl.cpp )
target_link_libraries(windows_d3d ${OPENGL_LIBRARIES} user32 gdi32 )

add_executable(windows_d3d12 WIN32 helloengine_d3d12.cpp )
target_link_libraries(windows_d3d user32 gdi32 )