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
int t[1000];
int main()
{
    int k,n=200,m;
    cin>>m>>k;
    vector<int>line[n+1];
    FOR(i,0,n+1)line[i].resize(0);
    FOR(i,1,m+1)
    {
        int l,r;
        cin>>l>>r;
        FOR(j,l,r+1)line[j].push_back(i);
    }
    vector<int>over;
    set<int>overr[n+1];
    FOR(i,1,n+1)
    {
        if(line[i].size()>k)over.push_back(i);
    }
    FOR(i,0,over.size())
    {
        FOR(j,0,line[over[i]].size())
        {
            t[line[over[i]][j]]++;
            overr[over[i]].insert(line[over[i]][j]);
        }
    }
    int ans=0;
    FOR(i,1,201)
    {
        if(t[i]>1)
        {
            cout<<i<<endl;
            ans++;
            FOR(j,1,n+1)
            {
                overr[j].erase(i);
            }
        }
    }
    FOR(i,1,n+1)
    {
        if(overr[i].size()>k)ans++;
    }
    cout<<ans;
    return 0;
}
