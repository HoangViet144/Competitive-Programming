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
ll n;
int main()
{
    cin>>n;
    if(2<= n && n<=3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    vector<ll> ans;
    for(int i=1;i<=n;i++)
        if (i%2==0) ans.push_back(i);
    for(int i=1;i<=n;i++)
        if (i%2==1) ans.push_back(i);
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    return 0;
}
