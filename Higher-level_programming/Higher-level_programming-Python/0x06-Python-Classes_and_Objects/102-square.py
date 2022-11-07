#!/usr/bin/python3
"""Square module"""


class Square:
    """ Module """
    def __init__(self, size=0):
        """Init"""
        self.size = size

    @property
    def size(self):
        """Getter"""
        return self.__size

    @size.setter
    def size(self, value):
        """Setter"""
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """calculate square"""
        return (self.__size * self.__size)

    def __eq__(self, other):
        """ eq """
        return (self.area() == other.area())

    def __ne__(self, other):
        """ ne """
        return (self.area() != other.area())

    def __gt__(self, other):
        """ gt """
        return (self.area() > other.area())

    def __lt__(self, other):
        """ lt """
        return (self.area() < other.area())

    def __ge__(self, other):
        """ ge """
        return (self.area() >= other.area())

    def __le__(self, other):
        """ le """
        return (self.area() <= other.area())
