#!/usr/bin/python3
"""
This module create the look up function
"""

Rectangle = __import__('9-rectangle').Rectangle


class Square(Rectangle):
    """ a square."""
    def __init__(self, size):
        """ init """
        self.integer_validator("size", size)
        super().__init__(size, size)
        self.__size = size
