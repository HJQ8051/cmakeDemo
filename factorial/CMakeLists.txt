cmake_minimum_required(VERSION 3.15)
project(Factorial)

include_directories(${HEADPATH})
aux_source_directory(. SRC_LIST)
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(factorial STATIC ${SRC_LIST})
