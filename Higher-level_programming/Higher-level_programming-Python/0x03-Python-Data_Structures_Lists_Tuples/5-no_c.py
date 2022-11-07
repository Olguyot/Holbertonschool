#!/usr/bin/python3/
def no_c(my_string):
    new = ""
    for i in my_string:
        if i in "cC":
            pass
        else:
            new += i
    return new
