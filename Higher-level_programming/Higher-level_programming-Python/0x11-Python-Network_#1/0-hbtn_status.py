#!/usr/bin/python3
""" Module  to get url response """
import urllib.request as ur
if __name__ == "__main__":
    with ur.urlopen("https://intranet.hbtn.io/status") as resp:
        a = resp.read()
    print("Body response:")
    print("\t- type: {}".format(type(a)))
    print("\t- content: {}".format(a))
    print("\t- utf8 content: {}".format(a.decode('utf-8')))
