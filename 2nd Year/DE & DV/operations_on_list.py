#creating a list 
numbers = [0,1,2,3,4,5,6,7,8,9]


#--------------------------------------------------------------------------------------------------------


#accessing the elements
print(numbers[1])
print(numbers[-1])
print(numbers[9])
print(numbers[3])
print(numbers[-3])

numbers = [0,1,2,3,4,5,6,7,8,9]

#adding an element by using append function (to the end of the list)
numbers.append(10)
print(numbers)

#adding an element by using insert function (at specific index in the list)
numbers.insert(5,11)
print(numbers)

numbers.insert(15, 12)
print(numbers)

numbers.insert(-3, 11)
print(numbers)


#--------------------------------------------------------------------------------------------------------


numbers = [0,1,2,3,4,5,6,7,8,9]

# removing an element using remove function
numbers.remove(5)
print(numbers)

    #if element is nt present in the list then gives error
#numbers.remove(15)
#print(numbers)

# removing an element using pop function
numbers.pop(-4)
print(numbers)

    # index is greater then the list so gives error
#numbers.pop(15)
#print(numbers)

#removing an element according to index using del keyword
    #index ts greater than list size so gives error
#del numbers[10]
#print(numbers)
del numbers[-2]
print(numbers)

#--------------------------------------------------------------------------------------------------------

#concatinating lists
numbers = [0,1,2,3,4,5,6,7,8,9]
fruits = ['apple','banana','cherry']
all_items = numbers + fruits
print(all_items)

#repeating list
all_items = numbers*2
print(all_items)

all_items = numbers*(-1)
print(all_items)

#--------------------------------------------------------------------------------------------------------


#checking membership
fruits = ['apple','banana','cherry']
print('apple' in fruits)
print('elderberry' in fruits)


#--------------------------------------------------------------------------------------------------------


#finding length
fruits = ['apple','banana','cherry']
print(len(fruits))


#--------------------------------------------------------------------------------------------------------


#List slicing
numbers = [0,1,2,3,4,5,6,7,8,9]

#syntax ==>  slice = list[start:stop:step]

#simple slice
slice_1 = numbers[2:6]
print(slice_1)

#omitting the start index
slice_2 = numbers[:6]
print(slice_2)

#omitting the stop index
slice_3 = numbers[5:]
print(slice_3)

#using negative indices
slice_4 = numbers[-5:-2]
print(slice_4)

slice_5 = numbers[-2:-6]
print(slice_5)

slice_6 = numbers[-2:-2]
print(slice_6)

#reversing a list
slice_7 = numbers[::-1]
print(slice_7)

#using steps
slice_8 = numbers[2::2]
print(slice_8)

slice_9 = numbers[-2::-2]
print(slice_9)

slice_10 = numbers[2:8:-2]
print(slice_10)


#--------------------------------------------------------------------------------------------------------
