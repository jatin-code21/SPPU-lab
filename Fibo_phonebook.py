print("Author: XYZ")
print("Phonebook Application Fibonacci")


def min(x, y):
    if (x < y):
        return x
    else:
        return y


def fibSearch(ar, x, n):
    f2 = 0
    f1 = 1
    fibM = f2 + f1
    while fibM < n:
        f2 = f1
        f1 = fibM
        fibM = f2 + f1
    offset = -1
    while (fibM > 1):
        i = min(offset + f2, n - 1)
        if (ar[i][0] < x):
            fibM = f1
            f1 = f2
            f2 = fibM - f1
            offset = i
        elif (ar[i][0] > x):
            fibM = f2
            f1 = f1 - f2
            f2 = fibM - f1
        else:
            return i
        if (f1 and ar[offset + 1][0] == x):
            return offset + 1
    return -1


def insert(phbk, x1):
    c = [x1]
    mob = int(input("Input Mobile number of your friend:"))
    c.append(mob)
    print(c)
    phbk.append(c)
    print(phbk)
    print("For Binary and Fibonacci search record must be in sorted order in phonebook")
    sort(phbk)


def sort(phbk):
    for j in range(len(phbk)):
        swapped = False
        i = 0
        while i < len(phbk) - 1:
            if phbk[i][0] > phbk[i + 1][0]:
                phbk[i], phbk[i+1] = phbk[i + 1], phbk[i]
                swapped = True
            i = i + 1
        if swapped == False:
            break
    print("*********After sorting the data in phonebook....**********")
    print(phbk)


print("Fibonacci Search Method:", end="\n")
# Test Array
phbk = [["algar", 45689746556], ["bondil", 9798465123], ["cisthus", 6498465184], ["drake", 444184514],
        ["esmas", 46863131589]]
n = len(phbk)
print("The elements inside the phonebook are as follows:", end="\n")
for i in range(n):
    print(phbk[i])
    print()


print("Total elements present in phonebook are:", n)
x = (input("Enter name you want to Search for:"))
x1 = x.lower()
print(x1)
result = fibSearch(phbk, x1, n)


if result != -1:
    print("Element is present at index", str(result))
else:
    print(x1, " is not present in phonebook")
    print("Record", x1, " is now inserting in phonebook....")
    insert(phbk, x1)
    print("Record ", x1, " added successfully in phonebook...")
