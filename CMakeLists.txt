# Set minimum CMake version
cmake_minimum_required(VERSION 3.15)

# Set project name
project(bonsai)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# Add external library directories
add_subdirectory(external/glfw)

# Create glob for all source files
file(GLOB SOURCES 
	"src/*.cpp",
	"src/*/*.cpp",
	"src/*/*/*.cpp"
)

# Create library
add_library(${PROJECT_NAME} ${SOURCES})

# Add include directories
target_include_directories(${PROJECT_NAME}
  PUBLIC
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PRIVATE
    external/glfw/include
)

# Add link directories
target_link_directories(${PROJECT_NAME}
  PRIVATE
    external/glfw/src
)

# Add link libraries
target_link_libraries(${PROJECT_NAME}
  PRIVATE
    glfw  
)