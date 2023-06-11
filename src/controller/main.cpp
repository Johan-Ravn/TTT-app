#include "iostream"
#include "memory"

#include "board.hpp"

int main() {
    Board board;
    board.printBoard();
    std::vector<char> vecBoard = board.getBoard();
    board.modifyBoard(3, 'X');
    board.printBoard();
    return 0;
}
