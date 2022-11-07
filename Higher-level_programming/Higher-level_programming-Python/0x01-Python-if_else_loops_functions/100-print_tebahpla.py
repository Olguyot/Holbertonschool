#!/usr/bin/python3

i = ord('z')
while i >= ord('a'):
    if i % 2 != 0:
        j = i - 32
    else:
        j = i
    print("{:c}".format((j)), end="")
    i -= 1
