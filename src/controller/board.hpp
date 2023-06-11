#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>

class Board {
    public:
        Board();
        std::vector<char> getBoard();
        void printBoard();
        void modifyBoard(int pos, char change);
    private:
        std::vector<char> board;
        void initializeBoard();
        const char EMPTYSPACE = '_';
};

#endif
