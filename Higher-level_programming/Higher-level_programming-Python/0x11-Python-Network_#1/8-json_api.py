#!/usr/bin/python3
"""
    sends a POST request.
"""
import requests
from sys import argv


if __name__ == '__main__':
    if len(argv) > 1:
        letter = argv[1]
    else:
        letter = ""
    params = {'q': letter}
    url = 'http://0.0.0.0:5000/search_user'
    resp = requests.post(url, params)
    try:
        json = resp.json()
        if json:
            print('[{}] {}'.format(json['id'], json['name']))
        else:
            print('No result')
    except:
        print('Not a valid JSON')
