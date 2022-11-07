#!/usr/bin/python3
"""
    Module
"""


def matrix_divided(matrix, div):
    """ Matrix function """
    matrixError = "matrix must be a matrix (list of lists) of integers/floats"
    if not isinstance(div, int) and not isinstance(div, float):
        raise TypeError("div must be a number")
    if div == 0:
        raise ZeroDivisionError("division by zero")
    if matrix is None or len(matrix) == 0:
            raise TypeError("")
    for i in range(0, len(matrix)):
        if not isinstance(matrix[i], list):
            raise TypeError(matrixError)
        for j in matrix[i]:
            if not isinstance(j, int) and not isinstance(j, float):
                raise TypeError(matrixError)
    size = len(matrix[0])
    for i in range(0, len(matrix)):
        if len(matrix[i]) != size:
            raise TypeError(matrixError)
    res = []
    for i in range(0, len(matrix)):
        res.append([])
        for j in matrix[i]:
            res[i].append(float("{:.2f}".format(j / div)))
    return (res)
