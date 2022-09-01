cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(parsingnestedjson 
               ${CMAKE_SOURCE_DIR}/Sandbox/ParsingNestedJson/parsingnestedjson.cc)

configure_file(${CMAKE_SOURCE_DIR}/Sandbox/ParsingNestedJson/playingcardsdata.json
               ${CMAKE_BINARY_DIR}/bin/playingcardsdata.json)