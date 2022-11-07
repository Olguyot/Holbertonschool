#!/bin/bash
# send a GET request with specific header variable
curl -s -H "X-Holbertonschool-User-ID: 98" -X GET "$1"
