#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary is None or len(a_dictionary) == 0:
        return None
    new = a_dictionary.copy()
    new = new.values()
    new = list(new)
    new.sort(reverse=True)
    maxVal = new[0]
    for i, j in a_dictionary.items():
        if j == maxVal:
            return i
