n= int(input())
factorial =1
ans=1
for i in range(1,n+1):
    factorial*=i
    ans+=1/factorial
print(ans)