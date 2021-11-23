def ternarySearch(l, r, x, ar):
    while r >= l:
        mid1 = l + (r-1)//3
        mid2 = r - (r-1)//3
        if x == ar[mid1]:
            return mid1
        if x == ar[mid2]:
            return mid2

        if x < ar[mid1]:
            r = mid1 - 1
        elif x > ar[mid2]:
            l = mid2 + 1
        else:
            l = mid1 + 1
            r = mid2 - 1

    return -1


ar = []
n = int(input("Enter the number of students: "))
for i in range(n):
    roll = int(input("Enter the rollNo of student " + str(i+1) + " :"))
    ar.append(roll)

l = 0
r = n - 1

x = int(input("Enter the rollNo you want to search: "))
ar.sort()

p = ternarySearch(l, r, x, ar)

if (p == -1):
    print(x, "is not present")
else:
    print(x, "is present")
