#include "rules.hpp"

BoardRules::BoardRules(std::vector<char> a_board, int a_move) {
    board = a_board;
    move = a_move;
}

bool BoardRules::legalMove() {
    if (validMove() != true) {
        return false;
    }

    if (boardPositionEmpty() != true) {
        return false;
    }
}

bool BoardRules::validMove() {
    if (move )
    if (move > 8 || move < 0) {}
}

bool BoardRules::boardPositionEmpty() {

}


