#!/usr/bin/python3
"""Square
"""


class Square:
    """Square
    """
    def __init__(self, size=0):
        """Init

        Args:
            size (int): size
        """
        if isinstance(size, int):
            self.__size = size
        else:
            raise TypeError()
        if size < 0:
            raise ValueError()

    def area(self):
        """area
        """
        return(self.__size * self.__size)
