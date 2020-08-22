#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <(b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long
using namespace std;
int n,k;
int main()
{
    cin>>n>>k;
    int ar[n];
    FOR(i,0,n)cin>>ar[i];
    int res=-ar[0]+ar[n-1];
    int tmp[n-1];
    FOR(i,0,n-1)tmp[i]=ar[i]-ar[i+1];
    sort(tmp,tmp+n-1);
    FOR(i,0,k-1)res+=tmp[i];
    cout<<res;
    return 0;
}
