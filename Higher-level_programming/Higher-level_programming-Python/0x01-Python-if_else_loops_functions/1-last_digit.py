#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
td = ["and is greater than 5", "and is 0", "and is less than 6 and not 0"]
if number < 0:
    lastdigit = (number * -1) % 10
    lastdigit *= -1
else:
    lastdigit = number % 10
if lastdigit > 5:
    print("Last digit of {0} is {1} {2}".format(number, lastdigit, td[0]))
elif lastdigit == 0:
    print("Last digit of {0} is {1} {2}".format(number, lastdigit, td[1]))
elif lastdigit < 6:
    print("Last digit of {0} is {1} {2}".format(number, lastdigit, td[2]))
