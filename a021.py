a = input().split()

a1 = int(a[0])
a2 = a[1]
a3 = int(a[2])

if (a2 == "+"):
    print(a1+a3)
elif (a2 == "-"):
    print(a1-a3)
elif (a2 == "*"):
    print(a1*a3)
else:
    print(a1//a3)
