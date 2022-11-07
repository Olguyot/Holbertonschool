#!/usr/bin/python3
"""Square module"""


class Square:
    """Square class"""
    def __init__(self, size=0, position=(0, 0)):
        """Init
        Args:
            size (int): size
            position (tuple): position
        """
        self.size = size
        self.position = position

    @property
    def size(self):
        """getter"""
        return self.__size

    @size.setter
    def size(self, value):
        """setter"""
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    @property
    def position(self):
        """getter"""
        return self.__position

    @position.setter
    def position(self, value):
        """setter"""
        if isinstance(value, tuple) and len(value) == 2 \
            and isinstance(value[0], int) and isinstance(value[1], int) \
                and value[0] >= 0 and value[1] >= 0:
                    self.__position = value
        else:
            raise TypeError("position must be a tuple of 2 positive integers")

    def area(self):
        """calculate square"""
        return (self.__size * self.__size)

    def my_print(self):
        """Print square"""
        if (self.__size == 0):
            print("")
        else:
            for i in range(0, self.__position[1]):
                print("")
            for i in range(0, self.__size):
                for k in range(0, self.__position[0]):
                    print(" ", end='')
                # for j in range(0, self.size):
                for j in range(0, self.__size):
                    print("#", end='')
                print("")
