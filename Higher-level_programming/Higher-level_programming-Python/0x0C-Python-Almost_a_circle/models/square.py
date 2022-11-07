#!/usr/bin/python3
""" Definition of the function """
from models.rectangle import Rectangle
from models.rectangle import checkValueHeight
from models.rectangle import checkType


class Square(Rectangle):
    """ Definition of the function """

    def __init__(self, size, x=0, y=0, id=None):
        """ Definition of the function """
        self.size = size
        super().__init__(size, size, x, y, id)

    @property
    def size(self):
        """Get the size of the Square."""
        return self.__width
        # why not return self.size

    @size.setter
    def size(self, value):
        """ Definition of the function """
        if checkType(value, "width") and checkValueHeight(value, "width"):
            self.__width = value
            self.__height = value
            self.__size = value

    def update(self, *args, **kwargs):
        """ Definition of the function """
        ls = ["id", "size", "x", "y"]
        if args and len(args) != 0:
            for i in range(0, len(args)):
                setattr(self, ls[i], args[i])
        elif kwargs and len(kwargs) != 0:
            for key, value in kwargs.items():
                setattr(self, key, value)

    # why it only work assigned as private class attribute
    def __str__(self):
        """ Definition of the function """
        return "[Square] ({}) {}/{} - {}".format(self.id,
                                                 self.x,
                                                 self.y,
                                                 self.__size)

    def to_dictionary(self):
        """ Definition of the function """
        return {"id": self.id,
                "size": self.__size,
                "x": self.x,
                "y": self.y}
