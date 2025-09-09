cmake_minimum_required(VERSION 3.16)

project(MostWater LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# include catch header
include_directories(
    ${CMAKE_SOURCE_DIR}/catch
)

set(TEST_SOURCES
    test/test_calculatemostwater.cpp
    calcmostwater.h
)

add_executable(MostWater main.cpp)

# Tests program
add_executable(tests
    ${TEST_SOURCES}
)
target_include_directories(tests
    PRIVATE
    catch
)

# enable ctest IDE integration
enable_testing()
add_test(NAME MostWaterUTest COMMAND tests)

include(GNUInstallDirs)
install(TARGETS MostWater
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
