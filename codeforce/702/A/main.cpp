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
#define N 10005

using namespace std;
int cur[N];
int main()
{
    int n;
    cin>>n;
    long long ar[n];
    FOR(i,0,n)cin>>ar[i];
    cur[0]=1;
    int ans=1;
    FOR(i,1,n)
    {
        if(ar[i]>ar[i-1])cur[i]=cur[i-1]+1;
        else cur[i]=1;
        ans=max(ans,cur[i]);
    }
    cout<<ans;
    return 0;
}
