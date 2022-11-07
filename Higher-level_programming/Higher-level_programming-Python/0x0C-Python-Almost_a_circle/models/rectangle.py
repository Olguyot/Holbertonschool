#!/usr/bin/python3
""" Definition of the function """
from models.base import Base


def checkType(value, attr_1):
    """ Definition of the function """
    if type(value) is not int:
        raise TypeError("{} must be an integer".format(attr_1))
    else:
        return True


def checkValue(value, attr_1):
    """ Definition of the function """
    if value < 0:
        raise ValueError("{} must be >= 0".format(attr_1))
    else:
        return True


def checkValueHeight(value, attr_1):
    """ Definition of the function """
    if value <= 0:
        raise ValueError("{} must be > 0".format(attr_1))
    else:
        return True


class Rectangle(Base):
    """ function definition """

    def __init__(self, width, height, x=0, y=0, id=None):
        """ Definition of the function """
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y

    @property
    def width(self):
        """ Definition of the function """
        return(self.__width)

    @width.setter
    def width(self, value):
        """ Definition of the function """
        if checkType(value, "width") and checkValueHeight(value, "width"):
            self.__width = value

    @property
    def height(self):
        """ Definition of the function """
        return self.__height

    @height.setter
    def height(self, value):
        """ Definition of the function """
        if checkType(value, "height") and checkValueHeight(value, "height"):
            self.__height = value

    @property
    def x(self):
        """ Definition of the function """
        return self.__x

    @x.setter
    def x(self, value):
        """ Definition of the function """
        if checkType(value, "x") and checkValue(value, "x"):
            self.__x = value

    @property
    def y(self):
        """ Definition of the function """
        return self.__y

    @y.setter
    def y(self, value):
        """ Definition of the function """
        if checkType(value, "y") and checkValue(value, "y"):
            self.__y = value

    def area(self):
        """ Definition of the function """
        return self.__width * self.__height

    def display(self):
        """Print a rectangle"""
        for k in range(0, self.__y):
            print()
        for i in range(0, self.__height):
            for l in range(0, self.__x):
                print(" ", end="")
            for j in range(0, self.__width):
                print("#", end="")
            print()

    def __str__(self):
        """ Str overide """
        return "[Rectangle] ({}) {}/{} - {}/{}".format(self.id,
                                                       self.__x,
                                                       self.__y,
                                                       self.__width,
                                                       self.__height)

    def update(self, *args, **kwargs):
        """ Definition of the function """
        ls = ["id", "width", "height", "x", "y"]
        if args and len(args) != 0:
            for i in range(0, len(args)):
                setattr(self, ls[i], args[i])
        elif kwargs and len(kwargs) != 0:
            for key, value in kwargs.items():
                setattr(self, key, value)

    def to_dictionary(self):
        """ Definition of the function """
        return {"id": self.id,
                "width": self.__width,
                "height": self.__height,
                "x": self.__x,
                "y": self.__y}
