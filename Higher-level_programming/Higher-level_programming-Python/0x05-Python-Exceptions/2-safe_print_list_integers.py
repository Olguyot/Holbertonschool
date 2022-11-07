#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    cp = 0
    for i in range(0, x):
        if i < x:
            try:
                print("{:d}".format(my_list[i]), end='')
                cp += 1
            except (ValueError, TypeError):
                pass
    print('')
    return(cp)
