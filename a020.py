abc = { "A": 10, "J": 18, "S": 26,
        "B": 11, "K": 19, "T": 27,
        "C": 12, "L": 20, "U": 28,
        "D": 13, "M": 21, "V": 29,
        "E": 14, "N": 22, "W": 32,
        "F": 15, "O": 35, "X": 30,
        "G": 16, "P": 23, "Y": 31,
        "H": 17, "Q": 24, "Z": 33,
        "I": 34, "R": 25
}

num = input()

sum = abc.get(num[0]) // 10 + abc.get(num[0]) % 10 * 9

sum += int(num[1])*8+\
       int(num[2])*7+\
       int(num[3])*6+\
       int(num[4])*5+\
       int(num[5])*4+\
       int(num[6])*3+\
       int(num[7])*2+\
       int(num[8])+\
       int(num[9])

if (sum % 10 == 0):
    print("real")
else:
    print("fake")
