#!/usr/bin/python3
""" Module """


class MyInt(int):
    """MyInt has == and != operators inverted"""
    def __init__(self, val):
        """init"""
        self.__val = val

    def __eq__(self, val):
        """eq override."""
        return self.__val != val

    def __ne__(self, val):
        """ne override """
        return self.__val == val
