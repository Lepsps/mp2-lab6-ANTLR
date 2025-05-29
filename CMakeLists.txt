cmake_minimum_required(VERSION 3.12)
project(mygrProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(antlr4-cpp-runtime-4.13.2-source)

set(ANTLR_GENERATED_DIR ${CMAKE_CURRENT_SOURCE_DIR}/generated)
set(ANTLR_GENERATED_SOURCES
    ${ANTLR_GENERATED_DIR}/mygrLexer.cpp
    ${ANTLR_GENERATED_DIR}/mygrParser.cpp
    ${ANTLR_GENERATED_DIR}/mygrBaseVisitor.cpp
    ${ANTLR_GENERATED_DIR}/mygrVisitor.cpp
)

include_directories( ${ANTLR_GENERATED_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-cpp-runtime-4.13.2-source/runtime/src)
add_executable(mygrApp src/main.cpp ${ANTLR_GENERATED_SOURCES})

target_link_libraries(mygrApp PRIVATE antlr4_static)

# REPORT
message( STATUS "")
message( STATUS "General configuration for ${PROJECT_NAME}")
message( STATUS "======================================")
message( STATUS "")
message( STATUS "   Configuration: ${CMAKE_BUILD_TYPE}")
message( STATUS "")