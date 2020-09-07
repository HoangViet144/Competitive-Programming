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
ll n,mod = 1e9+7;
ll bigPow(ll n)
{
    if (n==0) return 1;
    if (n==1) return 2%mod;
    ll tmp = bigPow(n/2);
    if (n%2 ==0)
        return ((tmp%mod )* (tmp%mod))%mod;
    else
        return ((tmp%mod )* (tmp%mod)* (2%mod))%mod;
}
int main()
{
    cin>>n;
    cout<<bigPow(n);
    return 0;
}
