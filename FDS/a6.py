alist=[]
n=int(input("Enter the number of students:"))
for i in range (n):
    marks=float(input("\nEnter the percentage:"))
    alist.append(marks)
    print ("The percentages are:- ",alist)
def partition(p,start,end):
    pivot=p[start]
    i = start + 1
    j = end
    while True:

        while i<=j and p[i]<=pivot:
            i +=1
        while i<=j and p[j]>=pivot:
            j -=1
        if i<=j:
            p[i],p[j]=p[j],p[i]
        else :
            break
    p[start],p[j]=p[j],p[start]

    return j
def quicksort(p,start,end):
    while start < end:
        pi=partition(p,start,end)
        quicksort(p,start,pi-1)
        quicksort(p,pi+1,end)
        return p
sort_list= quicksort(alist,0,len(alist)-1)
print("Sorted list",sort_list)
print("Top 5 elemets are:",sort_list[:-6:-1])