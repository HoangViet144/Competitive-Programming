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
    string s,t;
    cin>>s>>t;
    int n=s.length();
    vector<vector<int>>nxt(n+2, vector<int>(26,n+1));
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<26;j++)nxt[i][j]=nxt[i+1][j];
        nxt[i][s[i]-'a']=i+1;
    }
    int res=1,pos=0;
    for(int i=0;i<t.length();i++)
    {
        if(pos==n+1)
        {
            pos=0;
            res++;
        }
        if(nxt[pos][t[i]-'a'] == n+1)
        {
            pos=0;
            res++;
        }
        if(nxt[pos][t[i]-'a']==n+1 && pos==0)
        {
            cout<<-1<<endl;
            return;
        }
        pos=nxt[pos][t[i]-'a'];
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
