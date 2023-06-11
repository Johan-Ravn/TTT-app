#ifndef RULES_H
#define RULES_H

#include <iostream>
#include <vector>

class BoardRules {
    public:
        BoardRules(std::vector<char> a_board, int a_move);
        bool legalMove();
    private:
        std::vector<char> board;
        int move;
        bool boardPositionEmpty();
        bool validMove();
};

#endif
