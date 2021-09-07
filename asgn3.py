def dis_long(l):
    maxx = 0
    for i in l:
        size_word = len(i)
        if (size_word > maxx):
            maxx = size_word
            max_word = i
    print("The word with the max lenght is: ", max_word)


def frequency(l):
    char = input("Enter the character: ")
    print("The occurence of particular character in each string is respectively: ")
    for i in l:
        cnt = 0
        for j in i:
            if (j == char):
                cnt = cnt + 1
        print(cnt, end=" ")


def palindrome(l):
    for i in l:
        rev = i[::-1]
        if (rev == i):
            print(i, " is palindrome")
        else:
            print(i, " is not palindrome")


def substring(l):
    sub = input("Enter the string:")
    print("The index of the given sub-string is respectively:")
    for i in l:
        if (i.find(sub) == -1):
            print(-1, end=" ")
        else:
            print(i.find(sub), end=" ")


def freq_word():
    str = input("Enter the string:\n")
    str = str.split()
    str2 = []
    for i in str:
        if i not in str2:
            str2.append(i)
    for i in range(len(str2)):
        print('Frequency of', str2[i], 'is :', str.count(str2[i]))


ch = "y"
while (ch == "y"):

    strr = input("Enter the strings: ")
    l = strr.split()

    print("1. Display word with the longest length")
    print("2. To determine the frequency of occurence of particular character in the string")
    print("3. To check whether the string is palindrome or not")
    print("4. To display index of first apperance of the substring")
    print("5. To count the occurence of each word in a given string")
    print(l)
    choice = int(input("Enter the task you want to perform: "))
    if (choice == 1):
        dis_long(l)
    elif (choice == 2):
        frequency(l)
    elif (choice == 3):
        palindrome(l)
    elif (choice == 4):
        substring(l)
    elif (choice == 5):
        freq_word()
    ch = input("\nWant to continue(y/n)?: ")
