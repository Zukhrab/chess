"""Stack realization for game history"""

class Stack():
    def __init__(self) -> None:
        self.__top = 0
        self.__items = []

    def isEmpty(self) -> bool:
        if (self.__top == 0):
            return True
        
        return False

    def push(self, item) -> None:
        self.__items.append(item)
        self.__top += 1

    def pop(self) -> None:
        if (self.isEmpty() == False):
            self.__items.pop()
            self.__top -= 1

        else:
            print("Error! The stack is empty.")
    

    # For debug
    def getItem(self, index: int) ->  list:
        return self.__items[index]
    
    def getTop(self) -> int:
        return self.__top
    
    def show(self):
        for i in range(self.__top):
            print(f"{self.__items[self.__top - i - 1]}")
    

ex =  Stack()