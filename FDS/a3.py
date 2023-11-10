import numpy as np

# taking input and printing matrix 1:-

row1 = int(input("Enter number of rows in matrix 1:- "))
col1 = int(input("Enter number of columns in matrix 1:- "))
matrix1 = []
print(" Enter the the entries row wise:")

for i in range(row1):
    a = []
    for j in range(col1):
        a.append(int(input()))
    matrix1.append(a)

for i in range(row1):
    for j in range(col1):
        print()
array1 = np.array(matrix1) #converted list to array

print("1st matrix is:- ")
print(array1)

# taking n=input and printing matrix 2:-

row2 = int(input("Enter number of rows in matrix 2:- "))
col2 = int(input("Enter number of columns in matrix 2:- "))
matrix2 = []
print(" Enter the the entries row wise:")

for i in range(row2):
    b = []
    for j in range(col2):
        b.append(int(input()))
    matrix2.append(b)

for i in range(row2):
    for j in range(col2):
        print()
array2 = np.array(matrix2)
print("2nd matrix is:- ")
print(array2)

# addition of the matrices
while(1):

    print("Enter your choice")
    ch1=int(input())
    if(ch1==1):
        print("Addition of the matrices:- ")
        result = [[array1[i][j] + array2[i][j] for j in range
        (len(array1[0]))] for i in range(len(array1))]

        for r in result:
            print(r)


    if(ch1==2):
        # SUBTRACTION

        print("Subtraction of the matrices:- ")
        result = [[array1[i][j] - array2[i][j] for j in range
        (len(array1[0]))] for i in range(len(array1))]

        for r in result:
            print(r)


    if(ch1==3):
        # TRANSPOSE

        print("Transpose of the matrix 1 is:- ")
        result = [[array1[j][i] for j in range
        (len(array1[0]))] for i in range(len(array1))]

        for r in result:
            print(r)

        print("Transpose of the matrix 2:- ")
        result = [[array2[j][i] for j in range
        (len(array1[0]))] for i in range(len(array1))]

        for r in result:
            print(r)



    if(ch1==4):
        # MULTIPLICATION
        print("Multiplication of the matrices is:- ")
        result = [[array1[i][j] * array2[i][j] for j in range
        (len(array1[0]))] for i in range(len(array1))]

        for r in result:
            print(r)