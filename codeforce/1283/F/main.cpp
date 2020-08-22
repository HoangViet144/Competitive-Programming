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
#define INP "solve"
#define OUT "solve"
void doc()
{
    freopen(INP ".inp","r",stdin);
    freopen(OUT ".out","w",stdout);
}
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ar[n+1];
    vector<int>degree(n+1,0);
    FOR(i,1,n)
    {
        cin>>ar[i];
        degree[ar[i]]++;
    }
    priority_queue <int, vector<int>, greater<int>> q;
    cout<<ar[1]<<endl;
   // degree[ar[1]]--;
    FOR(i,1,n+1)if(degree[i]==0)q.push(i);
    for(int i=n-1;i>=1;i--)
    {
        cout<<ar[i]<<" "<<q.top()<<endl;
        degree[ar[i]]--;
        q.pop();
        if(degree[ar[i]]==0)q.push(ar[i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    //doc();
    solve();
    return 0;
}
