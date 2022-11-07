#!/usr/bin/python3
if __name__ == "__main__":
    import calculator_1
    from sys import argv, exit
    list = ["+", "-", "*", "/"]
    if len(argv) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)
    elif argv[2] not in list:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)
    a = int(argv[1])
    b = int(argv[3])
    if (argv[2] == list[0]):
        print("{} {} {} = {}".format(a, list[0], b, calculator_1.add(a, b)))
    elif (argv[2] == list[1]):
        print("{} {} {} = {}".format(a, list[1], b, calculator_1.sub(a, b)))
    elif (argv[2] == list[2]):
        print("{} {} {} = {}".format(a, list[2], b, calculator_1.mul(a, b)))
    elif (argv[2] == list[3]):
        print("{} {} {} = {}".format(a, list[3], b, calculator_1.div(a, b)))
