#!/usr/bin/python3
""" Python script that lists list 10 """
import requests
from sys import argv


if __name__ == "__main__":
    username = argv[1]
    repo = argv[2]
    url = "https://api.github.com/repos/{}/{}/commits?per_page=10"\
        .format(username, repo)
    request = requests.get(url)
    data = request.json()
    for info in data:
        print("{}: {}".format(info.get("sha"),
                              info.get("commit").get("author").get("name")))
