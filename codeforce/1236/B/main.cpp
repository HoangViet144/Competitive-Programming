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
long long poww(long long a, long long b, long long k)
{
    if(b==0)return 1;
    if(b==1)return a%k;
    long long tmp=poww(a,b/2,k);
    tmp=tmp*tmp%k;
    if(b%2==1)tmp=(tmp*a)%k;
    return tmp;
}
int main()
{
    long long m,n;
    cin>>n>>m;
    long long mod=1000000007;
    long long ans=poww(2,m,mod);
    ans--;
    ans=poww(ans,n,mod);
    cout<<ans;
    return 0;
}
