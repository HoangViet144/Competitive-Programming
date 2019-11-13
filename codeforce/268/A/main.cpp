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
int host[105],guest[105];
int n;
int main()
{
    cin>>n;
    FOR(i,1,n)
    {
        int h,g;
        cin>>h>>g;
        host[h]++;
        guest[g]++;
    }
    int ans=0;
    FOR(i,1,100)ans+=host[i]*guest[i];
    cout<<ans;
    return 0;
}
