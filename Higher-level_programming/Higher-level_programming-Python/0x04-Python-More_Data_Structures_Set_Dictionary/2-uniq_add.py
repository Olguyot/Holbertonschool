#!/usr/bin/python3
def uniq_add(my_list=[]):
    sum = 0
    u = []
    for i in my_list:
        if i not in u:
            u.append(i)
            sum += i
    return (sum)
