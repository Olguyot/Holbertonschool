#!/bin/bash
# Displays the size of 
curl -s -o /dev/null -w '%{http_code}' "$1"
