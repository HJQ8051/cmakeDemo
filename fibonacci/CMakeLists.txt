cmake_minimum_required(VERSION 3.15)
project(Fibonacci)

include_directories(${HEADPATH})
aux_source_directory(. SRC_LIST)
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(fibonacci SHARED ${SRC_LIST})
