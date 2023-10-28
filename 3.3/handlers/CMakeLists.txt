cmake_minimum_required(VERSION 3.1)
project(handlers VERSION 1.0)

set(SRC_HANDLERS
    handler.cpp 
    fatalErrorHandler.cpp 
    errorHandler.cpp 
    warningHandler.cpp 
    unknownMessageHandler.cpp 
    abstractHandler.cpp)

include_directories(includes)

add_library(handlers ${SRC_HANDLERS})