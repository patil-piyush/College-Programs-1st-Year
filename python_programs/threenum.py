a = int(input("num 1: "))
b = int(input("num 2: "))
c = int(input("num 3: "))
if(a > b and a > c):
    print("greatest number of above is ", a)
    if(b > c):
        print("smallest number of above is ", c)
        print("middle number of above is ", b)
    else:
        print("smallest number of above is ", b)
        print("middle number of above is ", c)

elif(b > a and b > c):
    print("greatest number of above is ", b)
    if(a > c):
        print("smallest number of above is ", c)
        print("middle number of above is ", a)
    else:
        print("smallest number of above is ", a)
        print("middle number of above is ", c)

else:
    print("greatest number of above is ", c)
    if(a > b):
        print("smallest number of above is ", b)
        print("middle number of above is ", a)
    else:
        print("smallest number of above is ", a)
        print("middle number of above is ", b)