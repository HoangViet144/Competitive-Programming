import math 
s,dig= input().split(' ')
s= str(s)
dig = int(dig)
mau1 = 1
for i in range(dig-1):
    mau1=mau1*10+1
mau1*=9
tu1= int(s[-dig:])
dotInd = s.find('.')
tu2=0
tmp= len(s)- dotInd-1
if tmp>dig:
    tu2= int(s[dotInd+1: -dig])
    for i in range(tmp-dig):
        mau1*=10

mau2 = 1
for i in range(len(str(tu2))):
    mau2*=10
phanNguyen= int(s[:dotInd])
mauTotal= mau1*mau2
tuTotal =  phanNguyen*mauTotal + tu1*mau2+ tu2*mau1
_gcd= math.gcd(tuTotal,mauTotal)
tuTotal/=_gcd
mauTotal/=_gcd
print("%d/%d"%(tuTotal,mauTotal))