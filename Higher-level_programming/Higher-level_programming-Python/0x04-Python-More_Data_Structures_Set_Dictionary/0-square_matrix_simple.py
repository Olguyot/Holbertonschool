#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    ls = []
    for i in matrix:
        ls.append(list(map(lambda x: x * x, i)))
    return ls
