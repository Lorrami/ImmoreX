cmake_minimum_required(VERSION 3.10)

project(ImmoreX)

set(ENGINE_SOURCES
    src/ImmoreX/Application.cpp
)

set (BUILD_SHARED_LIBS TRUE)

add_compile_definitions(IMMOREX_EXPORTS)

add_library(ImmoreX SHARED
    ${ENGINE_SOURCES}
)
