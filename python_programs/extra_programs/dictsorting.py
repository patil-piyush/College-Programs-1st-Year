n = int(input("Enter the number of elements: "))
numbers = []
for i in range(n):
    num = int(input(f"Enter number {i+1}: "))
    numbers.append(num)
numbers.sort()
print(numbers)
