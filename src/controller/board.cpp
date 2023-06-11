#include "board.hpp"

Board::Board() {
    initializeBoard();
}

void Board::initializeBoard() {
    for (int i = 0; i < 9; i++) {
        board.push_back(EMPTYSPACE);
    }
}

void Board::printBoard() {
    for (int i = 0; i < 3; i++) {
        int row = i * 3;
        std::cout << "|" << board[0 + row] << "|" << board[1 + row] << "|" << board[2 + row] << "|" << std::endl;
    }
}

void Board::modifyBoard(int pos, char change) {
    board[pos] = change;
}

std::vector<char> Board::getBoard() {
    return board;
}
