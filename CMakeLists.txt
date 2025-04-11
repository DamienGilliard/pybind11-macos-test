cmake_minimum_required(VERSION 3.17)

# To allow VERSION variables to be set in the project() command
if(POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif()

project(pybind-macos
    VERSION 0.0.1
    DESCRIPTION "A super simple pybind11 example"
    LANGUAGES CXX
    )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SIMPLE_VERSION_INFO
    "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}"
    )

find_package(Python3 REQUIRED COMPONENTS Interpreter Development)

# detect the virtual environment
if(Python3_EXECUTABLE)
    execute_process(COMMAND ${Python3_EXECUTABLE} -c "import sys; print(sys.prefix)"
                    OUTPUT_VARIABLE VIRTUALENV
                    OUTPUT_STRIP_TRAILING_WHITESPACE)
    message(STATUS "Using virtualenv: ${VIRTUALENV}")
else()
    message(FATAL_ERROR "Python executable not found.")
endif()

#check that the virtual environment is activated
set(EXPECTED_ENV "pybind11-env")
get_filename_component(VIRTUALENV_NAME ${VIRTUALENV} NAME)
if(NOT VIRTUALENV_NAME STREQUAL EXPECTED_ENV)
    message(FATAL_ERROR "Please create and activate the 'pybind11-env' environment by running from the root directory: \n conda env create -f ./environment.yml \n conda activate pybind11-env \n")
endif()

add_subdirectory(submodules/pybind11)
pybind11_add_module(dummy_module src/binding.cc
                                 src/cpp.cc)

target_compile_definitions(dummy_module PRIVATE
                            VERSION_INFO=${SIMPLE_VERSION_INFO}
                            )
