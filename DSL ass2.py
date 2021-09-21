def avg(ml,num_of_students):
    sum=0
    for i in range (len(ml)):
        if (ml[i]>=0):
            sum = sum + ml[i]
    average=sum/num_of_students
    print("Avg marks: ",average)

def absent(mks):
    cnt = 0
    for i in range (len(mks)):
        if mks[i] == -1:
            cnt = cnt + 1;
    print("Number of absent students: ", cnt)

def frequency(mks):
    i=0
    max = 0
    for j in range (mks):
        if (mks.index(j)==i):
            if mks.count(j)>max:
                max = mks.count(j)
                mark = j
        i = i+1
    print ("Marks with hoghest frequency is: ", mark)

marks_FDS=[]
num_of_students=int(input("Enter the number of students: "))
for i in range (num_of_students):
    marks = int(input("Enter the marks of student"+ str(i+1)+" : "))
    marks_FDS.append(marks)

print("MENU")
print("1:Avg score of the class")
print("2:Highest and lowest score of the class")
print("3:Count of students who were absent for the test")
print("4:Display marks with Highest frequency")
ch=int(input("Enter the choice from 1 to 4: "))

if ch==1:
    avg(marks_FDS,num_of_students)
    
elif ch==2:
    marks_FDS.sort()
    print("Highest Score in Class : ", marks_FDS[num_of_students-1])
    print("Lowest Score in Class : ", marks_FDS[0])
    
elif ch==3:
    absent(marks_FDS)

elif ch==4:
    frequency(marks_FDS)