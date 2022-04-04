cmake_minimum_required(VERSION 3.0.0)
project(imViewer VERSION 0.1.0)

find_package(OpenCV REQUIRED)
add_executable(imViewer imViewer.cpp)

target_link_libraries(imViewer
    PRIVATE
        opencv_highgui)
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
