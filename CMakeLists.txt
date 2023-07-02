cmake_minimum_required(VERSION 3.15)

project(BONSAI)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME}
  PRIVATE
    external/glfw/include
)

target_link_directories(${PROJECT_NAME}
  PRIVATE
    external/glfw/src
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    glfw  
)