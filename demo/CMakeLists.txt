project(nonmanifold-laplacian-demo)

# Dependencies
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# Nonmanifold-laplacian (along with its own dependencies)
if (NOT TARGET nonmanifold-laplacian)
    find_package(nonmanifold-laplacian REQUIRED)
endif ()

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
target_link_libraries(tufted-idt PRIVATE geometry-central polyscope args nonmanifold-laplacian)
