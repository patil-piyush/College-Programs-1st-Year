#write a program to perform calculator using functions
def add(num1, num2):
    return num1 + num2

def subtract(num1, num2):
    return num1 - num2

def multiply(num1, num2):
    return num1 * num2

def divide(num1, num2):
    if num2 == 0:
        print("Error! Division by zero is not allowed.")
        return 0
    return num1 / num2


num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n")
choice = int(input("Enter your choice: "))

if choice == 1:
    result = add(num1, num2)
elif choice == 2:
    result = subtract(num1, num2)
elif choice == 3:
    result = multiply(num1, num2)
elif choice == 4:
    result = divide(num1, num2)
else:
    print("Invalid choice!")
    exit()
print("\nResult:", result)
