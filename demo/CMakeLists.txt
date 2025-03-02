cmake_minimum_required(VERSION 3.10.0)
project(nonmanifold-laplacian-demo)

include(FetchContent)

# Dependencies
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# Nonmanifold-laplacian (along with its own dependencies)
if (NOT TARGET nonmanifold-laplacian)
    find_package(nonmanifold-laplacian REQUIRED)
endif ()

# Polyscope
FetchContent_Declare(
        polyscope
        GIT_REPOSITORY https://github.com/nmwsharp/polyscope.git
        GIT_TAG 050538e
)
FetchContent_MakeAvailable(polyscope)

# Args
FetchContent_Declare(
        args
        GIT_REPOSITORY https://github.com/Taywee/args.git
        GIT_TAG 6.4.6
)
FetchContent_MakeAvailable(args)

# Executable
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

add_executable(tufted-idt main.cpp)
target_link_libraries(
        tufted-idt PRIVATE
        geometry-central
        polyscope
        args
        nonmanifold-laplacian
)
