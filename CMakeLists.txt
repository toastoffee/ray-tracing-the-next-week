cmake_minimum_required(VERSION 3.27)
project(ray_tracing_the_next_week)

set(CMAKE_CXX_STANDARD 17)

add_executable(ray_tracing_the_next_week main.cpp
        aabb.h
        bvh.h)
