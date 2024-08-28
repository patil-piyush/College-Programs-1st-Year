import numpy as np

arr = np.array([1, 2, 3, 4, 5, 6, 7])

#start not mentioned
print(arr[4:])

#both are mentioned
print(arr[2:4])

#stop not mentioned
print(arr[:4])

#negative slicing
print(arr[-3:-1])

#adding steps
print(arr[1:5:2])

print(arr[::2])

#------------------------------------------------------------------------

"""
import numpy as np

#slicing 2D array
arr = np.array([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]])

#slicing in row 1 from index 1 to 4(excluded)
print(arr[1, 1:4])

#from both rows return index 2
print(arr[0:2, 2])

#From both rows, slice index 1 to index 4 (excluded)
print(arr[0:2, 1:4])
"""
