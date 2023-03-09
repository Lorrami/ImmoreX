cmake_minimum_required(VERSION 3.10)

project(Game)

set(GAME_SOURCES
    src/GameApp.cpp
)

add_executable(Game
    ${GAME_SOURCES}
)

include_directories(${CMAKE_SOURCE_DIR}/ImmoreX/src)

target_link_libraries(Game ImmoreX)
