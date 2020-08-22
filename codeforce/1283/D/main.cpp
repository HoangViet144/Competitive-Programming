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
#define N 200005

using namespace std;
int n,m;
int ar[N];
void solve()
{
    queue<int> pos;
    map<int,int> d;
    FOR(i,0,n)
    {
        d[ar[i]]=0;
        pos.push(ar[i]);
    }
    ll totalDis=0;
    vector<int>ans;
    while(!pos.empty())
    {
        if(ans.size()==m)break;
        int curPos=pos.front();
        pos.pop();
        if(d[curPos]!=0)
        {
            totalDis+=d[curPos];
            ans.push_back(curPos);
        }
        if(!d.count(curPos-1))
        {
            d[curPos-1]=d[curPos]+1;
            pos.push(curPos-1);
        }
        if(!d.count(curPos+1))
        {
            d[curPos+1]=d[curPos]+1;
            pos.push(curPos+1);
        }
    }
    cout<<totalDis<<endl;
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
}
int main()
{
    cin>>n>>m;
    FOR(i,0,n)cin>>ar[i];
    solve();
    return 0;
}
