#!/bin/bash
# return only 200 request if [ "$(curl -sL -w "%{http_code}" -I "$1" -o /bin/null)" -eq 200 ]; then curl -sL "$1" ; fi
[ "$(curl -sL -w "%{http_code}" -I "$1" -o /bin/null)" -eq 200 ] && curl -sL "$1"
