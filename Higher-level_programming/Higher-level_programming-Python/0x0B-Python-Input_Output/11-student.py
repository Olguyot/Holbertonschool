#!/usr/bin/python3
""" Module """


class Student:
    """ Class student """
    def __init__(self, first_name, last_name, age):
        """ Init """
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """ To Json debug line:
            print("dict Origine i vault : " +
            strr(dictOrigine[i]) +"i vualt :" + str(i))
        """
        b = 0
        dict1 = {}
        dictOrigine = self.__dict__
        if type(attrs) == list:
            b = 1
            for i in attrs:
                if type(i) != str:
                    b = 0
                else:
                    try:
                        dict1[i] = str(dictOrigine[i])
                    except:
                        pass
        if b == 1:
            return dict1
        else:
            return dictOrigine

    def reload_from_json(self, json):
        """replaces all attributes of the Student"""
        if json:
            self.__dict__ = json
