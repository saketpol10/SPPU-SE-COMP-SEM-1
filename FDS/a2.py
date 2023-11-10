def assignment_two():
    sum = 0
    count = 0
    max = 0
    min = 100

    for i in range(0, n):
        if students_list[i] != -1:
            sum = sum + students_list[i]
            count = count + 1
            if students_list[i] > max:
                max = students_list[i]
            if students_list[i] < min:
                min = students_list[i]

    print("Average of elements in list is :", (sum / count))
    print("Number of students absent :", n - count)
    print("Maximum score is :", max)
    print("Minimum score is :", min)


def countfreq(students_list):
    highestfreq = 0
    src = students_list[0]
    for i in students_list:
        frequency = students_list.count(i)
        if frequency > highestfreq:
            highestfreq = frequency
            src = i

    print("Highest frequency is :", src)


n = int(input("Enter number of students : "))
print("Enter marks for present students : ")
print("Enter -1 for absent student marks : ")
students_list = []
for i in range(0, n):
    marks = int(input("Enter marks :"))
    students_list.append(marks)

countfreq(students_list)#function call

assignment_two()#function call