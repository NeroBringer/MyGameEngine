add_executable(windows WIN32 helloengine_d2d.cpp)
target_link_libraries(windows user32 ole32 d2d1)
