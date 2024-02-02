from stack import Stack

class History():
    def __init__(self) -> None:
        self.history = Stack()

    def add(self, move: str) -> None:
        self.history.push(move)

    def show(self) -> None:
        self.history.show()




