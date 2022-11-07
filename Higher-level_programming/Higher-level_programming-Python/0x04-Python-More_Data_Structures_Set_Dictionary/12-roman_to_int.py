#!/usr/bin/python3
def roman_to_int(roman_string):
    roman_dict = {
        "I": 1, "V": 5, "X": 10,
        "L": 50, "C": 100, "D": 500, "M": 1000
    }
    if not isinstance(roman_string, str):
        return 0
    sizeidx = len(roman_string) - 1
    sum = 0
    i = 0
    while i <= sizeidx:
        if roman_string[i] in roman_dict:
            n = roman_dict[roman_string[i]]
            if (i + 1) <= sizeidx:
                n1 = roman_dict[roman_string[i + 1]]
                if n >= n1:
                    sum += n
                else:
                    sum -= n
                    i += 1
                    sum += n1
            else:
                sum += roman_dict[roman_string[i]]
        else:
            return 0
        i += 1
    return (sum)
