cmake_minimum_required(VERSION 2.8)
project(IsingModel CXX)

# Prefix
if (NOT PREFIX)
    set(PREFIX ${CMAKE_CURRENT_BINARY_DIR})
endif (NOT PREFIX)
set(CMAKE_INSTALL_PREFIX ${PREFIX} CACHE STRING "Installation prefix." FORCE)

if (CXX)
    set(CMAKE_CXX_COMPILER ${CXX})
endif (CXX)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

# Release or Debug
if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "Setting build type to 'Debug' as none was specified.")
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
endif ()

set(CMAKE_CTEST_COMMAND ctest -V) 
include(CTest)
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND})

# Detect Boost
set(Boost_NO_BOOST_CMAKE ON)
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
message(STATUS "Boost include directory ${Boost_INCLUDE_DIR}")

# Detect OpenMP
find_package(OpenMP REQUIRED)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

# Add math lib
set(LIBS ${LIBS} m)

# Testing the grid
add_executable(testGrid src/model/Grid.cpp test/TestGrid.cpp src/model/Matrix.cpp)
target_link_libraries(testGrid ${LIBS})
add_test(testGrid testGrid)

# Testing the matrix
add_executable(testMatrix test/TestMatrix.cpp src/model/Matrix.cpp)
target_link_libraries(testMatrix ${LIBS})
add_test(testMatrix testMatrix)

# Testing the Ising model
add_executable(testIsingModel test/TestIsingModel.cpp src/model/IsingModel.cpp src/model/Grid.cpp src/model/Matrix.cpp)
target_link_libraries(testIsingModel ${LIBS})
add_test(testIsingModel testIsingModel)

# Testing Monte Carlo
add_executable(testMonteCarlo test/TestMonteCarlo.cpp src/model/IsingModel.cpp src/model/Grid.cpp src/model/Matrix.cpp src/model/MonteCarlo.cpp)
target_link_libraries(testMonteCarlo ${LIBS})
add_test(testMonteCarlo testMonteCarlo)

# Main
add_executable(main src/Main.cpp src/model/IsingModel.cpp src/model/Grid.cpp src/model/Matrix.cpp src/model/MonteCarlo.cpp)
target_link_libraries(main ${LIBS})

# Print compiler flags
get_directory_property(DirDefs COMPILE_DEFINITIONS)
message(STATUS "COMPILE_DEFINITIONS = ${DirDefs}")
if (${CMAKE_BUILD_TYPE} STREQUAL "Release")
    message(STATUS "C++ Flags: ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE} ${CMAKE_LINKER_EXE_FLAGS}" )
else()
    message(STATUS "C++ Flags: ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG} ${CMAKE_LINKER_EXE_FLAGS}" )
endif()