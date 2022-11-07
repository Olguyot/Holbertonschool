#!/usr/bin/python3
"""
This module create the look up function
"""

BaseGeometry = __import__('7-base_geometry').BaseGeometry


class Rectangle(BaseGeometry):
    """ Rectangle """
    def __init__(self, width, height):
        """ Rectangle """
        self.integer_validator("width", width)
        self.integer_validator("height", height)
        self.__width = width
        self.__height = height

    def area(self):
        return (self.__width * self.__height)

    def __str__(self):
        """__str__ overload"""
        return "[Rectangle] {:d}/{:d}".format(self.__width, self.__height)
