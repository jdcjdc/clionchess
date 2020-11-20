//
// Created by jandc on 27/08/2020.
//

#ifndef EX01_CLASSICCHESSTEMPLATE_H
#define EX01_CLASSICCHESSTEMPLATE_H


#include <iosfwd>
#include "../factories/BoardFactory.h"
#include <iostream>
#include "ChessTemplate.h"

class ClassicChessTemplate : ChessTemplate {
public:
    ClassicChessTemplate(BoardFactory* boardFactory);

    friend std::ostream& operator<<(std::ostream& os, const ClassicChessTemplate& cct);
private:
    BoardFactory *boardFactory;

    void init();

};

// jdc see https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=vs-2019
std::ostream& operator<<(std::ostream& os, const ClassicChessTemplate& classicChessTemplate)
{
//    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}

#endif //EX01_CLASSICCHESSTEMPLATE_H
