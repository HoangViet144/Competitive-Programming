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
        string s;
        cin>>s;
        map<ii,int> coord;
        ii cur={0,0};
        coord[cur]=0;
        int l=-1, r=n;
        FOR(i,0,n)
        {
            if(s[i]=='L')cur.first--;
            if(s[i]=='R')cur.first++;
            if(s[i]=='U')cur.second++;
            if(s[i]=='D')cur.second--;
            if(coord.count(cur) && r-l+1>i-coord[cur]+1)
            {
                l=coord[cur];
                r=i;
            }
            coord[cur]=i+1;
        }
        if(l==-1)cout<<-1<<endl;
        else cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}
