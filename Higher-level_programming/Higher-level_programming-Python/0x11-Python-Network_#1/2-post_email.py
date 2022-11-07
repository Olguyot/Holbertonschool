#!/usr/bin/python3
""" Module  to get url response """
import urllib.request
import sys

if __name__ == "__main__":
    url = sys.argv[1]
    data = urllib.parse.urlencode({"email": sys.argv[2]})
    data = data.encode('ascii')
    with urllib.request.urlopen(sys.argv[1], data) as resp:
        a = resp.read()
    print(a.decode('utf-8'))
