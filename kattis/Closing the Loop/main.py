def solve():
    n = int(input())
    R= []
    B= []
    s= list(input().split(' '))
    for i in s:
        if i[-1]=='R':
            R.append(int(i[:-1]))
        else:
            B.append(int(i[:-1]))
    R.sort(reverse=True)
    B.sort(reverse=True)
    if len(R)==0 or len(B)==0:
        return 0
    ans=0
    for i in range(min(len(B),len(R))):
        ans+= B[i]+ R[i]
    return ans - min(len(B),len(R))*2
t= int(input())
for i in range(t):
    print("Case #%d: %d"%(i+1,solve()))