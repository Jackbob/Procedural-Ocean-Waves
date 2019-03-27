cmake_minimum_required(VERSION 3.13)
project(Procedural)

set(CMAKE_CXX_STANDARD 17)


find_package(glfw3 3.2 REQUIRED)
find_package(OpenGL REQUIRED)


file(GLOB SOURCE_FILES
        "src/*.h"
        "src/*.cpp"
        "src/*.c++"
        "modules/glad/src/glad.c"
        "modules/glad/include/glad/glad.h"
        )

add_subdirectory(modules/glm)
include_directories(modules/glm modules/glad/include)

add_executable(Procedural ${SOURCE_FILES})
target_link_libraries(Procedural glfw ${GLFW_STATIC_LIBRARIES} ${OPENGL_opengl_LIBRARIES})
target_link_libraries(Procedural ${CMAKE_DL_LIBS})

