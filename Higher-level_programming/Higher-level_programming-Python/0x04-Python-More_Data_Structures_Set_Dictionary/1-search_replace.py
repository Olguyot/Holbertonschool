#!/usr/bin/python3
def search_replace(my_list, search, replace):
    j = 0
    new = []
    for i in my_list:
        if my_list[j] == search:
            new.append(replace)
        else:
            new.append(my_list[j])
        j += 1
    return (new)
