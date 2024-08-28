import numpy as np

arr = np.array([1, 2, 3, 4, 5])
#copy creates a new copy of original array
#changes made in copy does not affect the original array and vice versa
x = arr.copy()

#view creates just a view of original array
#changes made in view affects the original array and vice versa
y = arr.view()

#making changes to original array
arr[0] = 42

print(arr)
print(x)
print(y)
