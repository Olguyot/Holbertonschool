#!/usr/bin/python3/
def max_integer(my_list=[]):

    if len(my_list) == 0:
        return None
    i = 1
    maxval = my_list[0]
    while i < len(my_list):
        if maxval < my_list[i]:
            maxval = my_list[i]
        i += 1
    return (maxval)
