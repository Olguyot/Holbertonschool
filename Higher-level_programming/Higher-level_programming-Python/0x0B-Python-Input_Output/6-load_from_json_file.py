#!/usr/bin/python3
""" Module """
import json


def load_from_json_file(filename):
    """
    function that creates an Object from a “JSON file”
    """
    mytxt = ""
    with open(filename, mode="r") as f:
        for line in f.readlines():
            mytxt = mytxt + line
    return json.loads(mytxt)
