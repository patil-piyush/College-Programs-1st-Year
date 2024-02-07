n = int(input("enter the number of rows: "))
for i in range(1, n+1):
    for j in range(1, n-i+1):
        print(" ", end = "")
    for k in range(0, i):
        print(i, end = " ")
    print()
