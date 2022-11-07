#!/bin/bash
# send a post with specific variable header
curl -s -X POST -d "email=hr@holbertonschool.com&subject=I will always be here for PLD" "$1"
