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
const int N = 1e5+5;

using namespace std;
ll preSum1[N],preSum2[N];
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    ar[0]=0;
    FOR(i,1,n+1)cin>>ar[i];
    preSum1[0]=ar[0];
    FOR(i,1,n+1) preSum1[i]+=(preSum1[i-1]+ar[i]);
    sort(ar,ar+n+1);
    preSum2[0]=ar[0];
    FOR(i,1,n+1) preSum2[i]+=(preSum2[i-1]+ar[i]);
    int q;
    cin>>q;
    while(q--)
    {
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1)cout<<preSum1[r]-preSum1[l-1]<<endl;
        else cout<<preSum2[r]-preSum2[l-1]<<endl;
    }
    return 0;
}
