//
// Created by jandc on 27/08/2020.
//

#include <iostream>
#include "ClassicChessTemplate.h"

ClassicChessTemplate::ClassicChessTemplate(BoardFactory *boardFactory) : boardFactory(boardFactory) {}

void ClassicChessTemplate::init() {
    BoardClassical *boardClassical = boardFactory->createBoardFactoryTraditional();
}



