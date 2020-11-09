n= int(input())
ar= list(map(int,input().split(' ')))

for i in range(n):
    newAr=[]
    for j in range(n):
        if i==j:
            newNum= int("1"+ str(ar[i])[1:])
            newAr.append(newNum)
        else:
            newAr.append(ar[j])
    for j in range(n-1):
        if newAr[j]> newAr[j+1]:
            for num in newAr:
                print(num, end=" ")
            exit(0)
for i in range(n):
    newAr=[]
    for j in range(n):
        if i==j:
            newNum= int("9"+ str(ar[i])[1:])
            newAr.append(newNum)
        else:
            newAr.append(ar[j])
    for j in range(n-1):
        if newAr[j]> newAr[j+1]:
            for num in newAr:
                print(num, end=" ")
            exit(0)
for i in range(n):
    newAr=[]
    for j in range(n):
        if i==j and len(str(ar[i]))==1:
            newNum= int("0"+ str(ar[i])[1:])
            newAr.append(newNum)
        else:
            newAr.append(ar[j])
    for j in range(n-1):
        if newAr[j]> newAr[j+1]:
            for num in newAr:
                print(num, end=" ")
            exit(0)       
print("impossible")