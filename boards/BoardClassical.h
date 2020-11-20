//
// Created by jandc on 17/09/2020.
//

#ifndef EX01_BOARDCLASSICAL_H
#define EX01_BOARDCLASSICAL_H


#include <iosfwd>

class BoardClassical {
private:
//    int squares[64];
    int *squares;
    int *colors;

public:
    BoardClassical(int *squares, int *colors);

    friend std::ostream& operator<<(std::ostream& os, const BoardClassical& boardClassical);

    const int *getSquares() const;

    const int *getColors() const;
};

// jdc see https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=vs-2019
std::ostream& operator<<(std::ostream& os, const BoardClassical& boardClassical)
{
//    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    for ()
    return os;
}
#endif //EX01_BOARDCLASSICAL_H
