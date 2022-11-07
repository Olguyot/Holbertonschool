#!/usr/bin/python3


def remove_char_at(str, n):
    i = 0
    tmp = ""
    while i < len(str):
        if i == n:
            i += 1
            continue
        tmp = tmp + str[i]
        i += 1
    return (tmp)
