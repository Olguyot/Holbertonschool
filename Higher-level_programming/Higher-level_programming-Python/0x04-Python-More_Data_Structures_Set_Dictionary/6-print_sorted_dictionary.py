#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    """ls = list(a_dictionary).sort() do not work why?"""
    ls = sorted(a_dictionary.keys())
    for i in ls:
        print("{:s}: {}".format(i, a_dictionary[i]))
