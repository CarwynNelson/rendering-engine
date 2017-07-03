cmake_minimum_required(VERSION 3.7)
project(rendering_engine)

set(CMAKE_CXX_STANDARD 11)

# Requirements
find_package(OpenGL REQUIRED)

# GLEW for loading OpenGL extensions
find_package(GLEW REQUIRED)
if (GLEW_FOUND)
    include_directories(${GLEW_INCLUDE_DIRS})
endif()

# Build GLFW for windowing
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(vendor/glfw)

# All of the files required to build everything
set(SOURCE_FILES
        RenderEngine/Private/Application.cpp
        RenderEngine/Private/Display.cpp
        RenderEngine/Private/Filesystem.cpp
        RenderEngine/Private/Renderer.cpp
        RenderEngine/Public/Exceptions/WindowNotLoadedException.h
        RenderEngine/Public/Application.h
        RenderEngine/Public/Display.h
        RenderEngine/Public/Filesystem.h
        RenderEngine/Public/Loader.h
        RenderEngine/Public/Model.h
        RenderEngine/Public/Renderer.h
        Main.cpp RenderEngine/Public/Shader.h RenderEngine/Public/Loader.h)

add_executable(rendering_engine ${SOURCE_FILES})

# Link everything together
target_link_libraries(rendering_engine
        glfw
        ${GLEW_LIBRARIES}
        ${OPENGL_LIBRARIES}
)