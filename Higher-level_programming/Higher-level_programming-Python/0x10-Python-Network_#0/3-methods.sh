#!/bin/bash
# check header for http methode
curl -s -I "$1" | grep "Allow" | cut -d ':' -f 2 | cut -c2-
