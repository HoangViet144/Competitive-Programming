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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        //ar[0]=-1,
        //ar[n+1]=-1;
        FOR(i,0,n)cin>>ar[i];
        int max_cur=INT_MIN,min_cur=INT_MAX;
        FOR(i,0,n)
        {
            if(ar[i]!=-1 && ((i-1>=0&& ar[i-1]==-1)||(i+1<n&& ar[i+1]==-1) ))
            {
                max_cur=max(max_cur,ar[i]);
                min_cur=min(min_cur,ar[i]);
            }
        }
        int res = (max_cur + min_cur) / 2;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(ar[i] == -1) ar[i] = res;
            if(i)ans = max(ans,abs(ar[i] - ar[i - 1]));
        }
        cout <<ans<<" "<<res<<endl;
    }
    return 0;
}
