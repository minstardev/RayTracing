cmake_minimum_required(VERSION 3.15)
project(RayTracingInOneWeekend CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Optimization for Release build
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

file(GLOB SOURCES CONFIGURE_DEPENDS src/*.cpp src/*.h)

add_executable(RayTracingInOneWeekend
    ${SOURCES}
    external/stb/stb_image_write.h
)

target_include_directories(RayTracingInOneWeekend PRIVATE src external/stb)
