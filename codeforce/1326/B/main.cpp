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
    int n;
    cin>>n;
    ll b[n],a[n];
    FOR(i,0,n)cin>>b[i];
    a[0]=b[0];
    ll curMax=a[0];
    FOR(i,1,n)
    {
        a[i]=curMax+b[i];
        curMax=max(curMax,a[i]);
    }
    FOR(i,0,n)cout<<a[i]<<" ";
    return 0;
}
