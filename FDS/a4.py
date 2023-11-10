print("Begin with insertion sort : ")
print(" /n")

n = int(input("Enter number of elements in the list :"))
listA=[]
for i in range(0,n):
    ele = int(input("Enter the elements : "))
    listA.append(ele)
print("Given list is : ",listA)

m = 0
for i in range(1, len(listA)):
    key = listA[i]
    j = i - 1
    m = m + 1
    while j >= 0 and key < listA[j]:
        listA[j+1] = listA[j]
        j = j - 1
        listA[j+1] = key
        print("Pass " , m ,":" , listA)
print("Sorted List is :",listA)

print("Begin with shell sort : ")
print(" /n")

m = int(input("Enter number of elements in the list :"))
listB=[]
for i in range(0,m):
    ele1 = int(input("Enter the elements : "))
    listB.append(ele1)
print("Given list is : ",listB)

gap = m // 2
n=0
while gap > 0:
    for i in range(gap,m):
        temp = listB[i]
        j = i
        n = n + 1
        while j >= gap and listB[j-gap] > temp:
            listB[j] = listB[j-gap]
            j = j - gap
        listB[j] = temp
        print("Pass :", n, ":", listB)
    gap = gap // 2
print(listB)






