#!/usr/bin/python3
"""
This module create the look up function
"""


class BaseGeometry():
    """ Base Geometry """
    def area(self):
        """ Area """
        raise Exception("area() is not implemented")
