def minimum(numbers):
    if not numbers:
        return None
    min_val = numbers[0]
    for num in numbers:
        if num < min_val:
            min_val = num
    return min_val

def maximum(numbers):
    if not numbers:
        return None
    max_val = numbers[0]
    for num in numbers:
        if num > max_val:
            max_val = num
    return max_val

def mean(numbers):
    if not numbers:
        return None
    sum_val = 0
    for num in numbers:
        sum_val += num
    return sum_val / len(numbers)


input_numbers = input("Enter a list of numbers separated by commas: ")


numbers = [int(x) for x in input_numbers.split(',')]


print("Minimum:", minimum(numbers))
print("Maximum:", maximum(numbers))
print("Mean:", mean(numbers))
