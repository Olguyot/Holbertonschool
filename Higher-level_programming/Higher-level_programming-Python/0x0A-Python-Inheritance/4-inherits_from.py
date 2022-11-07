#!/usr/bin/python3
"""
This module create the look up function
"""


def inherits_from(obj, a_class):
    """
    True if the object is exactly an
    instance of the specified class ; otherwise False.
    """
    return issubclass(type(obj), a_class) and type(obj) != a_class
