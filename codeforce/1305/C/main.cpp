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
    int n,m;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    if(n<=m)
    {
        long long ans=1;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans=(ans%m*abs(ar[j]-ar[i])%m)%m;
            }
        }
        cout<<ans%m;
        return 0;
    }
    cout<<0;
    return 0;
}
