#!/usr/bin/python3

if __name__ == "__main__":
    from sys import argv
    lenM = len(argv)
    i = 1
    if lenM - 1 == 0:
        print("{} arguments.".format(lenM - 1))
    elif lenM - 1 == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(lenM - 1))
    while i < lenM:
        print("{}: {}".format(i, argv[i]))
        i += 1
