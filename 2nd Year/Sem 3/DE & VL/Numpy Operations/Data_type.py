import numpy as np

arr = np.array([1, 2, 3, 4])

#checking datatypes
print(arr.dtype)

#--------------------------------------------------------------------

"""
import numpy as np

#creating array with defined datatype
arr = np.array([1.11, 2, 3, 4], dtype='S')

print(arr)
print(arr.dtype)
"""

#--------------------------------------------------------------------

"""
import numpy as np

#creating array with defined datatype
arr = np.array(['apple', 'banana', 'cherry'], dtype='S')

print(arr)
print(arr.dtype)
"""

#--------------------------------------------------------------------

"""
import numpy as np

#converting the data type of existing array and storing it into newarr
arr = np.array([1.1, 2.1, 3.1])

newarr = arr.astype('i')

print(newarr)
print(newarr.dtype)
"""

#--------------------------------------------------------------------

"""
import numpy as np

#converting the data type of existing array and storing it into newarr
arr = np.array([-1, 0, 3])

newarr = arr.astype(bool)

#python considers 0 as false and other all as true while converting
print(newarr)
print(newarr.dtype)
"""
