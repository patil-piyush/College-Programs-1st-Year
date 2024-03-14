num1 = 0
num2 = 1
print("Fibonacci Series:")
n = int(input("Enter the number of terms you want in Fibonacci series: "))
for i in range(n):
    print(num1)
    fib = num1 + num2
    num1 = num2
    num2 = fib