print("-----------------USER MENU------------------")
print("")
print("")
print("Enter 1 to use Bubble Sort :")
print("Enter 2 to use Selection Sort :")
print("")
print("")
choice=int(input("Enter your choice : "))


if choice==1 :
    print("Begin with bubble sort : ")
    print("")
    asc = int(input("Enter no of entries : "))

    Alist = []
    for i in range(asc):
        ele = float(input("Enter numbers : "))
        Alist.append(ele)
    print("Given list is:", Alist)

    temp = []
    for i in range(len(Alist)):
        print("Iteration", i)
        for j in range(len(Alist) - i - 1):
            if (Alist[j] > Alist[j + 1]):
                temp = Alist[j]
                Alist[j] = Alist[j + 1]
                Alist[j + 1] = temp
            print("Steps are :", j, Alist)

        i = i - 1
    print("Sorted list is:",Alist)
    print("Top 5 elements are:", Alist[:-6:-1])

elif choice==2 :
    print("Begin with selection sort :")
    n = int(input("Enter no of entries :"))

    Blist = []
    for i in range(n):
        ele1 = float(input("Enter numbers : "))
        Blist.append(ele1)
    print("Given list is:", Blist)

    for i in range (len(Blist)):
        min=i
        print("Iterations are :",i)
        for j in range (i+1,len(Blist)):
            if Blist[j]<Blist[min]:
                min=j
            print("steps are :",j,Blist)
        (Blist[i],Blist[min])=(Blist[min],Blist[i])
    print('Sorted list is ;',Blist)
    print("Top 5 elements are:", Blist[:-6:-1])

