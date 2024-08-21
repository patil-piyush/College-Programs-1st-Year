import numpy as np

matrix1 = np.array([[1,2,3],[4,5,6],[7,8,9]])
matrix2 = np.array([[9,8,7],[6,5,4],[3,2,1]])

#addition without numpy
result_add1 = matrix1 + matrix2
print(result_add1)

#addition with numpy
result_add2  = np.add(matrix1, matrix2) 
print (result_add2)

#multiplication without using numpy
result_multiply1 = matrix1 * matrix2
print(result_multiply1)

#multiplication with using numpy multiply function
result_multiply2 = np.multiply(matrix1, matrix2)
print(result_multiply2)

#multiplication with using numpy dot function
result_multiply3 = np.dot(matrix1, matrix2)
print(result_multiply3)

#division without using numpy
result_division1 = matrix1 / matrix2
print(result_multiply1)

#division with using numpy divide function
result_division2 = np.divide(matrix1, matrix2)
print(result_multiply2)

#taking mod with using numpy mod function
result_mod = np.mod(matrix1, matrix2)
print(result_mod)

#taking squareroot with using numpy sqrt function
result_1 = np.sqrt(matrix1)
print(result_1)

#taking squareroot with using numpy sqrt function
result_2 = np.sqrt(matrix2)
print(result_2)
