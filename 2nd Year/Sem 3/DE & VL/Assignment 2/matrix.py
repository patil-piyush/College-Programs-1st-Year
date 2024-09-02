import numpy as np

matrix1 = np.array([[1,2,3],[4,5,6],[7,8,9]])
matrix2 = np.array([[9,8,7],[6,5,4],[3,2,1]])

#addition without numpy
result_add1 = matrix1 + matrix2
print("Matrix Addition 1:\n",result_add1)

#addition with numpy
result_add2  = np.add(matrix1, matrix2) 
print ("Matrix Addition 2:\n",result_add2)

#subtraction without using numpy
result_subtraction1 = matrix1 - matrix2
print( "Matrix Subtraction 1:\n",result_subtraction1)

#subtraction with numpy
result_subtraction2 = np.subtract(matrix1,matrix2)
print( "Matrix Subtraction 2:\n",result_subtraction2)

#multiplication without using numpy
result_multiply1 = matrix1 * matrix2
print("Matrix Multiplication 1:\n",result_multiply1)

#multiplication with using numpy multiply function
result_multiply2 = np.multiply(matrix1, matrix2)
print("Matrix Multiplication 2:\n",result_multiply2)

#multiplication with using numpy dot function
result_multiply3 = np.dot(matrix1, matrix2)
print("Matrix Dot Multiplication:\n",result_multiply3)

#division without using numpy
result_division1 = matrix1 / matrix2
print("Matrix Division 1:\n",result_multiply1)

#division with using numpy divide function
result_division2 = np.divide(matrix1, matrix2)
print("Matrix Division 2:\n",result_multiply2)

#taking mod with using numpy mod function
result_mod = np.mod(matrix1, matrix2)
print("Matrix Module:\n",result_mod)

#taking squareroot of matrix 1 with using numpy sqrt function
result_1 = np.sqrt(matrix1)
print("Matrix 1 square root:\n",result_1)

#taking squareroot of matrix 2with using numpy sqrt function
result_2 = np.sqrt(matrix2)
print("Matrix 2 square root:\n",result_2)

#other operations
arr = np.array([3, 2, 0, 1])
print("The given array is: ",arr)

print("SORTED ARRAY: ",np.sort(arr))
print("MEAN: ",np.mean(arr))
print("Median: ",np.median(arr))
print("MAX Element: ",np.max(arr))
print("MIN Element: ",np.min(arr))
