#!/usr/bin/python3
""" Module """


def append_after(filename="", search_string="", new_string=""):
    """unction that inserts a line of text to a file,
    after each line containing a specific string"""
    txt = ""
    with open(filename, mode="r") as f:
        for line in f.readlines():
            txt = txt + line
            if search_string in line:
                txt = txt + new_string
    with open(filename, mode="w") as w:
        w.write(txt)
