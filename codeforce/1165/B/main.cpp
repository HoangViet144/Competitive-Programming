#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
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
    int n;
    cin>>n;
    int con[n];
    FOR(i,0,n-1)cin>>con[i];
    sort(con,con+n);
    int ans=0;
    int j=1;
    FOR(i,0,n-1)
    {
        if(con[i]>=j)
        {
            ans++;
            j++;
        }
    }
    cout<<ans;
    return 0;
}
