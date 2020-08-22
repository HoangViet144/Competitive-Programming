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
void solve()
{
    int n;
    cin>>n;
    vector<int>ar[n+1];
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        ar[tmp].push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(ar[i].size()>=2)
        {
            if(ar[i][0]<ar[i][ar[i].size()-1]-1)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
