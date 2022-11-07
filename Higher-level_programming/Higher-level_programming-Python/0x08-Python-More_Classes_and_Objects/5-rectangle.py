#!/usr/bin/python3
""" Module rectangle """


class Rectangle:
    """ Rectangle """
    def __init__(self, width=0, height=0):
        """ Init """
        self.width = width
        self.height = height

    @property
    def width(self):
        """width"""
        return self.__width

    @width.setter
    def width(self, value):
        """width"""
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        """height"""
        return self.__height

    @height.setter
    def height(self, value):
        """height"""
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self):
        """area"""
        return self.__width * self.__height

    def perimeter(self):
        """perimeter"""
        if self.__width == 0 or self.__height == 0:
            return (0)
        return (self.__width + self.__height) * 2

    def get_str(self, a='#'):
        """get_str"""
        str = ""
        if self.__width == 0 or self.__height == 0:
            return ("")
        for i in range(0, self.__height):
            for j in range(0, self.__width):
                str = str + a
            if self.__height - 1 != i:
                str = str + '\n'
        return (str)

    def __str__(self):
        """Overload print"""
        str1 = self.get_str()
        return(str1)

    def __repr__(self):
        """Overload print"""
        str1 = "Rectangle(" + str(self.__width)
        str1 += ", " + str(self.__height) + ")"
        return (str1)

    def __del__(self):
        """ del """
        print("Bye rectangle...")
