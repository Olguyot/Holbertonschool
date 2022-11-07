#!/usr/bin/python3
"""
    Module
"""


def text_indentation(text):
    """ max text_indentation """
    if not isinstance(text, str):
        raise TypeError("text must be a string")
    newtext = ""
    for i in text:
        if i == '.' or i == '?' or i == ':':
            newtext = newtext + str(i)
            newtext = newtext + '\n'
        else:
            newtext = newtext + str(i)
    print(newtext)
