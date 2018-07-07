cmake_minimum_required(VERSION 3.10)
project(BattleshipGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(BattleshipGame main.cpp src/Board.cpp include/Board.h src/Tile.cpp include/Tile.h src/Cursor.cpp include/Cursor.h src/Ship.cpp include/Ship.h)
