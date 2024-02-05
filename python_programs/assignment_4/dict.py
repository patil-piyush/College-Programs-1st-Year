def even_odd_dict():
    n = int(input("Enter the number of elements: "))
    numbers = []
    for i in range(n):
        num = int(input(f"Enter number {i+1}: "))
        numbers.append(num)

    even_numbers = [num for num in numbers if num % 2 == 0]
    odd_numbers = [num for num in numbers if num % 2 != 0]

    num_dict = {'EVEN': even_numbers, 'ODD': odd_numbers}
    return num_dict

print(even_odd_dict())
