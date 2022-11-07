#!/usr/bin/python3/
def weight_average(my_list=[]):
    denom = 0
    quotien = 0

    if my_list == "" or my_list is None:
        return 0
    ls = []
    for i in my_list:
        denom += i[0] * i[1]
        ls.append(i[1])
    for i in ls:
        quotien += i
    if quotien == 0:
        return 0
    # print("{}/{} = {}".format(denom, quotien, denom / quotien))
    return (denom / quotien)
