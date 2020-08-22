#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long
#define N 1e5

using namespace std;

int main()
{
    ///python
    import math
mod=998244353
fact=[1]
n,m=map(int,input().split(' '))
for i in range(1,m+1):
	fact.append((fact[-1]*i)%mod)
ans=(n-2)*fact[m]*pow(fact[n-1]*fact[m-n+1],mod-2,mod)*pow(2,n-3,mod)
print(ans%mod)
    return 0;
}
