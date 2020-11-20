#include <iostream>
#include "main/ClassicChessTemplate.h"

int main() {

//    ClassicChessTemplate classicChessTemplate = ClassicChessTemplate(BoardFactory());
    ClassicChessTemplate *classicChessTemplate = new ClassicChessTemplate();
    BoardFactory::createBoardFactoryTraditional();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
