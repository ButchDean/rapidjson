cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(CMAKE_BUILD_TYPE Debug)

add_executable(parsingnestedjson 
               ${CMAKE_SOURCE_DIR}/Sandbox/ParsingNestedJson/parsingnestedjson.cc)

configure_file(${CMAKE_SOURCE_DIR}/bin/data/playingcardsdata.json
               ${CMAKE_BINARY_DIR}/bin/playingcardsdata.json)