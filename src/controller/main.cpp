#include <iostream>
#include <memory>

class Board {
    public:
        static Board *getInstance() {
            if (instance == nullptr) {
                instance = new Board();
            }
            return instance;
        }

        char board[8];

        void printBoard() {
            for (int i = 0; i < 3; i++) {
                int row = i * 3;
                std::cout << "|" << board[0 + row] << "|" << board[1 + row] << "|" << board[2 + row] << std::endl;
            }
        }
    
    private:
        static Board *instance;
        const char EMPTYSPACE = '_';
        Board(){
            initializeBoard();
        }

        void initializeBoard() {
            for (int i = 0; i < 9; i++) {
                board[i] = EMPTYSPACE;
            }
        }
};

int main() {
    std::unique_ptr<Board> ptrBoard = std::make_unique<Board>();
    ptrBoard->getInstance();
    ptrBoard->printBoard();
    std::cout << "It worked!" << std::endl;

    return 0;
}
