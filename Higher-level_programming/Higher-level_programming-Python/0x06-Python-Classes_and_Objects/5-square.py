#!/usr/bin/python3
"""Square module"""


class Square:
    """Square class"""
    def __init__(self, size=0):
        """Init
        Args:
            size (int): size
        """
        self.__size = size

    @property
    def size(self):
        """getter"""
        return self.__size

    @size.setter
    def size(self, value):
        """setter"""
        if isinstance(value, int):
            self.__size = value
        else:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")

    def area(self):
        """calculate square"""
        return (self.__size * self.__size)

    def my_print(self):
        """Print square"""
        if (self.size == 0):
            print("")
        for i in range(0, self.size):
            for j in range(0, self.size):
                print("#", end='')
            print("")
