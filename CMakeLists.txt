cmake_minimum_required(VERSION 3.17)
project(ex01)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex01 main.cpp main/ClassicChessTemplate.cpp main/ClassicChessTemplate.h factories/BoardFactory.cpp factories/BoardFactory.h constants/ClassicChessConstants.cpp constants/ClassicChessConstants.h moves/FixedMovesPerPieceClassicChess.cpp moves/FixedMovesPerPieceClassicChess.h boards/BoardClassical.cpp boards/BoardClassical.h utilities/contstants.cpp utilities/contstants.h main/ChessTemplate.cpp main/ChessTemplate.h)