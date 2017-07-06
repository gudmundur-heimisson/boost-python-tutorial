project (HelloWorld)
cmake_minimum_required(VERSION 2.8)

find_package(PythonLibs 3)
include_directories (${PYTHON_INCLUDE_DIRS})

find_package(Boost 1.60 COMPONENTS python3)
include_directories (${Boost_INCLUDE_DIRS})

add_library(
  hello SHARED
  hello.cpp
)

set_target_properties(
  hello
  PROPERTIES PREFIX ""
)

target_link_libraries (
  hello
  boost_python3
  ${PYTHON_LIBRARIES}
  ${Boost_LIBRARIES}
)
