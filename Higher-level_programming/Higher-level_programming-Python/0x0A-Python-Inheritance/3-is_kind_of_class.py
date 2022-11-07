#!/usr/bin/python3
"""
This module create the look up function
"""


def is_kind_of_class(obj, a_class):
    """
    True if the object is exactly an
    instance of the specified class ; otherwise False.
    """
    return isinstance(obj, a_class)
