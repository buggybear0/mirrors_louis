
cmake_minimum_required( VERSION 2.8 )
project (piper)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# Instruct CMake to create code from Qt designer ui files
set(CMAKE_AUTOUIC ON)
# Instruct CMake to run Qt ressource
set(CMAKE_AUTORCC ON)

set(piper_lib_src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/LaserBeam.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Safe.cc
)

set(piper_editor_src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cc
)

add_library(piper ${piper_lib_src})
target_include_directories(piper PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_options(piper PRIVATE -Wall)

add_executable(piper_editor ${piper_editor_src})
target_link_libraries(piper_editor piper)
target_compile_options(piper_editor PRIVATE -Wall)

# Install the executable
install(TARGETS   piper  DESTINATION lib)
install(TARGETS   piper_editor DESTINATION bin)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/data  DESTINATION bin)