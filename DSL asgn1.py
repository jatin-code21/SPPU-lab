student = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
a = [1, 2, 6, 7, 13, 15, 11]
b = [3, 4, 6, 8, 12, 13]
c = [6, 7, 8, 9, 14, 15]

t1 = []
t2 = []
t3 = []
t4 = []

for i in range(len(student)):
    if student[i] in a and student[i] in b:
        t1.append(student[i])
    if student[i] in a and student[i] not in b or student[i] in b and student[i] not in a:
        t2.append(student[i])
    if student[i] not in a and student[i] not in b:
        t3.append(student[i])
    if student[i] in a and student[i] in c and student[i] not in b:
        t4.append(student[i])
print("List of student who play both cricket and badminton :", t1)
print("List of student who play either cricket or badminton but not both:", t2)
print("No. of students who play neither cricket nor badminton :", len(t3))
print("No. of students who play cricket and football but not badminton :", len(t4))
