#!/usr/bin/python3
""" Module """
import json


def save_to_json_file(my_obj, filename):
    """
    function that writes an Object to a text file,
    using a JSON representation
    """

    with open(filename, mode="w") as f:
        jsontext = json.dumps(my_obj)
        f.write(jsontext)
