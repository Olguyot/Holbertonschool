#!/usr/bin/python3
"""
This module create the look up function
"""


def is_same_class(obj, a_class):
    """
    True if the object is exactly an
    instance of the specified class ; otherwise False.
    """

    return type(obj) is a_class
