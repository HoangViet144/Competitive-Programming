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
    string s;
    cin>>s;
    vector<int>ind;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R')ind.push_back(i+1);
    }
    int d=-1;
    for(int i=1;i<ind.size();i++)
    {
        d=max(d,ind[i]-ind[i-1]);
    }
    int n=s.length();
    if(ind.size()!=0)
    {
        d=max(d,ind[0]);
        d=max(d,n+1-ind[ind.size()-1]);
    }
    //if(ind.size()==1)d=max(ind[0],n+1-ind[0]);
    if(d==-1)d=s.length()+1;
    cout<<d<<endl;
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
