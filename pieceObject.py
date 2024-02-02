from enum import Enum

class Name(Enum):
    Undefined = None
    Pawn = 1
    Bishop = 2
    Knight = 3
    Tower = 4
    Queen = 5
    King = 6

class Color(Enum):
    Undefined = None
    Black = 0
    White = 1

class Position:
    def __init__(self) -> None:
        self.__x = None
        self.__y = None

    def setPosition(self, x, y) -> None:
        self.__x = x
        self.__y = y

    def getPosition(self):
        return self.__x, self.__y
    
class Piece:
    def __init__(self) -> None:
        self.name = Name.Undefined
        self.color = Color.Undefined
        self.position = Position()
