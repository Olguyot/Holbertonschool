#!/usr/bin/python3
"""
This module create the look up function
"""


class MyList(list):
    " Simple List "
    def print_sorted(self):
        """return the list attribute"""
        list1 = sorted(self.copy())
        print(list1)
