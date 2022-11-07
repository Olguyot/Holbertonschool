#!/usr/bin/python3
""" Module """


class Student:
    """ Class student """
    def __init__(self, first_name, last_name, age):
        """ Init """
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self):
        """ To Json """
        return(self.__dict__)
