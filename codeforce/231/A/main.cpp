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

using namespace std;

int main()
{
    int n;cin>>n;
    int problem[n][3];
    FOR(i,0,n)
    {
        FOR(j,0,3)cin>>problem[i][j];
    }
    int res=0;
    FOR(i,0,n)
    {
        int cnt=0;
        FOR(j,0,3)if(problem[i][j])cnt++;
        if(cnt>=2)res++;
    }
    cout<<res;
    return 0;
}
