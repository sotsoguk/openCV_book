cmake_minimum_required(VERSION 3.0.0)
project(opencv_ch01 VERSION 0.1.0)

find_package(OpenCV REQUIRED)
set(LIBS opencv_highgui)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(NO_OUTPUT_DIRS)


add_executable(imViewer src/imViewer.cpp)
add_executable(camViewer src/camViewer.cpp)

target_link_libraries(imViewer
    PRIVATE
        ${LIBS})
target_link_libraries(camViewer
    PRIVATE
        ${LIBS} ${CONAN_LIBS})
# target_link_libraries(camViewe)
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
