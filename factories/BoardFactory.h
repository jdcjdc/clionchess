//
// Created by jandc on 31/08/2020.
//

#ifndef EX01_BOARDFACTORY_H
#define EX01_BOARDFACTORY_H

#include "../boards/BoardClassical.h"
#include "../constants/ClassicChessConstants.h"

class BoardFactory: public ClassicChessConstants {
public:
//    BoardFactory(BoardClassical boardClassical);

    static BoardClassical *createBoardFactoryTraditional();

private:
//    BoardClassical boardClassical;

};

#endif //EX01_BOARDFACTORY_H
