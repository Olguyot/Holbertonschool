#!/usr/bin/python3/
def complex_delete(a_dictionary, value):
    if a_dictionary is None or a_dictionary == "":
        return a_dictionary
    nbpop = 0
    k = 0
    for i, j in a_dictionary.items():
        if j == value:
            nbpop += 1
    while k < nbpop:
        for i, j in a_dictionary.items():
            if j == value:
                a_dictionary.pop(i)
                break
        k += 1
    return a_dictionary
