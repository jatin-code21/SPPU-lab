import numpy as np


def add_m(m1, m2):
    print("The addition of two matrix is: ")
    print(np.add(m1, m2))


def sub_m(m1, m2):
    print("The subtraction of two matrix is: ")
    print(np.subtract(m1, m2))


def multi_m(m1, m2):
    print("The multiplication of two matrix is: ")
    print(np.dot(m1, m2))


def transpose(m1, m2):
    print("The transpose of a matrix1 is: ")
    print(m1.T)
    print("The transpose of a matrix2 is: ")
    print(m2.T)


ch = "y"
while (ch == "y"):
    print("*******MENU*******")
    print("1.Addition of a matrix")
    print("2.Subtraction of a matrix")
    print("3.Multiplication of a matrix")
    print("4.Transpose of a matrix")
    choice = int(input("Enter the choice number you want to perform: "))
    r1 = int(input("Enter the number of rows of first matrix: "))
    c1 = int(input("Enter the number of columns of first matrix: "))

    print("Enter the number in a single line seperated by space: ")

    enteries = list(map(int, input().split()))
    matrix1 = np.array(enteries).reshape(r1, c1)
    print(matrix1)

    r2 = int(input("Enter the number of rows of second matrix: "))
    c2 = int(input("Enter the number of columns of second matrix: "))
    print("Enter the number in a single line seperated by space: ")
    enteries = list(map(int, input().split()))
    matrix2 = np.array(enteries).reshape(r2, c2)
    print(matrix2)

    if (choice == 1):
        add_m(matrix1, matrix2)
    elif (choice == 2):
        sub_m(matrix1, matrix2)
    elif (choice == 3):
        multi_m(matrix1, matrix2)
    elif (choice == 4):
        transpose(matrix1, matrix2)

    ch = input("Want to continue (y/n)?: ")
