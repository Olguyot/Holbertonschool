#!/usr/bin/python3
"""square
"""


class Square:
    """class square
    """
    def __init__(self, size=0):
        if isinstance(size, int):
            self.__size = size
        else:
            print("size must be an integer", end='')
            raise TypeError
        if size < 0:
            print("size must be >= 0", end='')
            raise ValueError
