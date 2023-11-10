def intersection(a, b):
    intersectionset = []

    for i in a:
        if i in b:
            intersectionset.append(i)

    return (intersectionset)


def union(a, b):
    s = []
    for j in a:
        if j in a:
            s.append(j)
    union=[]

    for i in b:
        if i not in s:
            s.append(i)

    unionset = s
    return (unionset)


def diff(a, b):
    output = []
    for i in a:
        if i not in b:
            output.append(i)
    return (output)


# This is the code

groupA = []
nA = int(input("Enter the students playing cricket: "))
for i in range(0, nA):
    elementofA = int(input())
    groupA.append(elementofA)
print("The students playing cricket are: ", groupA, "\n")

groupB = []
nB = int(input("Enter the students playing badminton : "))
for i in range(0, nB):
    elementofB = int(input())
    groupB.append(elementofB)
print("The students playing badminton are: ", groupB, "\n")

groupC = []
nC = int(input("Enter the students playing football : "))
for i in range(0, nC):
    elementofC = int(input())
    groupC.append(elementofC)
print("The students playing football are: ", groupC, "\n")

print("User Menu: \n")
print("Select one of the options below to perform the desired operation !!\n")
print("1 = List of students who play both Cricket and Badminton")
print("2 = List of students who play either Cricket or Badminton")
print("3 = List of students who play neither Cricket nor badminton")
print("4 = List of students who play Cricket and Football but not Badminton\n")
while(1):
    userchoice = int(input("Enter your choice: "))
    if (userchoice == 1):
        intersectionelements = intersection(groupA, groupB)
        print("List of students who play both Cricket and Badminton but not bothis: ", intersectionelements)

    elif (userchoice == 2):
        output2 = []
        intersectionelements = intersection(groupA, groupB)
        unionelements = union(groupA, groupB)
        for i in unionelements:
            if i not in intersectionelements:
                output2.append(i)
        print("List of students who play either Cricket or Badminton is: ", output2)

    elif (userchoice == 3):
        output3=[]
        unionelements = union(groupA, groupB)
        unionelements1 = union(unionelements, groupC)
        for i in unionelements1:
            if i not in unionelements:
                output3.append(i)
        print("List of students who play neither Cricket nor badminton is: ", output3)


    elif (userchoice == 4):
        output4 = []
        intersectionelements = intersection(groupA, groupC)
        for i in intersectionelements:
            if i not in groupB:
                output4.append(i)
        print("List of students who play Cricket and Football but not Badminton is: ", output4)