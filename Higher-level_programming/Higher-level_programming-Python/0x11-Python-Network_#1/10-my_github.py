#!/usr/bin/python3
""" connect to git api """
from sys import argv
import requests


if __name__ == "__main__":
    if len(argv) >= 3:
        username = argv[1]
        api_token = argv[2]
        session = requests.Session()
        session.headers['Authorization'] = 'token %s' % api_token
        url = 'https://api.github.com/repos/%s' % username
        resp = session.get(url)
        if resp.status_code == 200:
            json = resp.json()
            print(json.get("id"))
        else:
            print(None)
