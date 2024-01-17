cmake_minimum_required(VERSION 3.10.0)
project(nonmanifold-laplacian)

option(NONMANIFOLD_LAPLACIAN_BUILD_DEMO "Build demo" OFF)

# Dependencies
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

include(FetchContent)

# Geometry central
FetchContent_Declare(
        geometry-central
        GIT_REPOSITORY https://github.com/nmwsharp/geometry-central.git
        GIT_TAG v0.1.0
)
FetchContent_MakeAvailable(geometry-central)

# Library
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

add_library(nonmanifold-laplacian STATIC
        src/bubble_offset.cpp
        src/point_cloud_utilities.cpp
        src/robust_laplacian.cpp
)
target_include_directories(nonmanifold-laplacian PUBLIC SYSTEM include)
target_link_libraries(nonmanifold-laplacian PRIVATE geometry-central)
set_property(TARGET nonmanifold-laplacian PROPERTY CXX_STANDARD 20)

# Demo
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

if (NONMANIFOLD_LAPLACIAN_BUILD_DEMO)
    add_subdirectory(demo)
endif ()
