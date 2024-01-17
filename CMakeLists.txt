cmake_minimum_required(VERSION 3.10.0)

project(nonmanifold-laplacian)


# Dependencies
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

include(FetchContent)

# Geometry central
FetchContent_Declare(
        geometry-central
        GIT_REPOSITORY https://github.com/nmwsharp/geometry-central.git
        GIT_TAG 391d787
)
FetchContent_MakeAvailable(geometry-central)

# Polyscope
FetchContent_Declare(
        polyscope
        GIT_REPOSITORY https://github.com/nmwsharp/polyscope.git
        GIT_TAG 050538e
)
FetchContent_MakeAvailable(polyscope)

# Library
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

add_library(nonmanifold-laplacian
        src/bubble_offset.cpp
        src/point_cloud_utilities.cpp
)
target_include_directories(nonmanifold-laplacian PUBLIC include)
target_link_libraries(nonmanifold-laplacian PRIVATE geometry-central polyscope)
set_property(TARGET nonmanifold-laplacian PROPERTY CXX_STANDARD 20)

# Demo
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

add_subdirectory(demo)
