//
// Created by jandc on 17/09/2020.
//

#include "BoardClassical.h"

const int *BoardClassical::getSquares() const {
    return squares;
}

const int *BoardClassical::getColors() const {
    return colors;
}

BoardClassical::BoardClassical(int *squares, int *colors) : squares(squares), colors(colors) {}
