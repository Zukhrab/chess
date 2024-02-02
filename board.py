from pieceObject import *

class Condition(Enum):
    FREE = 0
    BUSY = 1

class chessBoard:
    def __init__(self) -> None:
        self.stateBoard = 8 * [8 * [0]]
        #self.pieceBoard = 8 * [8 * [0]]
        print(len(self.stateBoard[0]))
        for j in range(2):
            self.stateBoard[0][j] = Condition.BUSY
        # for j in self.stateBoard[1]:
        #     j = Condition.BUSY
        # for j in self.stateBoard[6]:
        #     j = Condition.BUSY
        # for j in self.stateBoard[7]:
        #     j = Condition.BUSY

example = chessBoard()
print(example.stateBoard)
