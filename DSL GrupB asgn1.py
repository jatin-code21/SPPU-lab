def binary(rollNo, x):
    flag = 0
    rollNo.sort()
    print("The sorted list of rollNo is", rollNo)
    lower = 0
    upper = len(rollNo)-1
    while (upper >= lower):
        mid = (lower+upper)//2
        if (rollNo[mid] == x):
            flag = 1
            ind = mid
            break
        elif (rollNo[mid] > x):
            lower = 0
            upper = mid-1
        else:
            lower = mid+1
            upper = len(rollNo)-1

    if (flag == 1):
        print(x, "has attended")
        print("The index of ", x, "is ", ind)
    else:
        print(x, "has not attended")


def sentinel(rollNo, n, x):
    last = rollNo[n-1]
    i = 0
    rollNo[n-1] = x
    while (rollNo[i] != x):
        i = i + 1
    rollNo[n-1] = last
    if ((i < n-1) or (x == rollNo[n-1])):
        print("The rollNo is present at index", i)
    else:
        print("The rollNo is not present.")


ch = "y"
n = int(input("Enter the number of students who attended: "))
rollNo = []
for i in range(n):
    print("Enter the rollNo of student", i+1, ":", end=" ")
    roll = int(input())
    rollNo.append(roll)
while(ch == "y"):

    print("Which search method you want to perform: ")
    print("1.Linear Search")
    print("2.Binary Search")
    print("3.Sentinal Search")
    choice = int(input("Enter the choice number you want to perform: "))
    if (choice == 1):
        x = int(input("Enter the rollNo you want to search: "))
        flag = 0
        for i in range(n):
            if (x == rollNo[i]):
                flag = 1
                ind = i
                break
        if (flag == 1):
            print(x, "has attended")
            print("The index of ", x, "is ", ind)
        else:
            print(x, "has not attended")

    if (choice == 2):
        x = int(input("Enter the rollNo you want to search: "))
        binary(rollNo, x)

    if (choice == 3):
        x = int(input("Enter the rollNo you want to search: "))
        sentinel(rollNo, n, x)

    ch = input("Want to continue? (y/n): ")
