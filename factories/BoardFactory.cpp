//
// Created by jandc on 31/08/2020.
//

#include "BoardFactory.h"
#include "../constants/ClassicChessConstants.h"

BoardClassical* BoardFactory::createBoardFactoryTraditional() {
    int squares[64];
    int colors[64];

    // set pieces
    squares[0] = whiteRook;
    squares[1] = whiteKnight;
    squares[2] = whiteBisshop;
    squares[3] = whiteQueen;
    squares[4] = whiteKing;
    squares[5] = whiteBisshop;
    squares[6] = whiteKnight;
    squares[7] = whiteRook;
    squares[8] = whitePawn;
    squares[9] = whitePawn;
    squares[10] = whitePawn;
    squares[11] = whitePawn;
    squares[12] = whitePawn;
    squares[13] = whitePawn;
    squares[14] = whitePawn;
    squares[15] = whitePawn;

    for (int i = 16; i < 48; i++) {
        squares[i] = 0;
    }

    squares[48] = blackPawn;
    squares[49] = blackPawn;
    squares[50] = blackPawn;
    squares[51] = blackPawn;
    squares[52] = blackPawn;
    squares[53] = blackPawn;
    squares[55] = blackPawn;
    squares[56] = blackRook;
    squares[57] = blackKnigt;
    squares[58] = blackBisshop;
    squares[59] = blackQueen;
    squares[60] = blackKing;
    squares[61] = blackBisshop;
    squares[62] = blackKnigt;
    squares[63] = blackRook;

    for (int i = 0; i < 64; i++) {
        if (i < 16) {
            colors[i] = white;
        } else if (i > 47) {
            colors[i] = black;
        } else {
            colors[i] = 0;
        }
    }
    return new BoardClassical(squares, colors);
}