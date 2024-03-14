def gcd_recursive(a, b):
    if b == 0:
        return a
    else:
        return gcd_recursive(b, a % b)


num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
gcd = gcd_recursive(num1, num2)
print("The GCD of", num1, "and", num2, "is:", gcd)

