
class Board:
    _instance = None
    
    def __new__(cls, *args, **kwargs):
        if not cls._instance:
            cls._instance = super().__new__(cls)
        return cls._instance

    def __repr__(self) -> str:
        f"{self.printBoard()}"
        
    def __init__(self, EMPTYSPACE="_") -> None:
        self.row = 3
        self.col = 3
        self.board = self.init_board()
        self.EMPTYSPACE = EMPTYSPACE
    
    def init_board(self):
        return [] * (self.row * self.col)

    def printBoard(self):

        for i in range(self.row):
            print(f"{self.board[0 + (i * 3)]} | {self.board[1 + (i * 3)]} | {self.board[2 + (i * 3)]}")
            print("-" * 10)


class Rules:
    pass

class Input:
    pass

def gameSquence():
    pass

def initializeGame():
    pass

def main():
    name = Board().printBoard()
    
    
if __name__ == "__main__":
    main()
