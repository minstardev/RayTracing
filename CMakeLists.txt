cmake_minimum_required(VERSION 3.15)
project(RayTracingInOneWeekend CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 릴리즈 빌드 시 최적화 (레이트레이싱은 느려서 -O2 없으면 답답합니다)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

add_executable(RayTracingInOneWeekend
    src/main.cpp
)

target_include_directories(RayTracingInOneWeekend PRIVATE src)
