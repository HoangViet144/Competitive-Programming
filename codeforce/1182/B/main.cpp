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

using namespace std;
int w,h;
int main()
{
    cin>>h>>w;
    vector<string> ar(h);
    FOR(i,0,h)cin>>ar[i];
    vector<int>center(2,-1);
    FOR(i,1,h-1)
    {
        FOR(j,1,w-1)
        {
            if(ar[i][j-1]=='*' && ar[i][j+1]=='*' && ar[i-1][j]=='*' && ar[i+1][j]=='*')
            {
                if(center[0]==-1 && center[1]==-1)center[0]=i,center[1]=j;
                else {cout<<"NO";return 0;}
            }
        }
    }
    if(center[0]==-1 && center[1]==-1){cout<<"NO";return 0;}
    vector<vector<bool>>shape(h);
    FOR(i,0,h)shape[i].resize(w);
    shape[center[0]][center[1]]=true;
    int ind=0,x=center[0],y=center[1];
    while(x+ind<h && ar[x+ind][y]=='*' ){shape[x+ind][y]=true;ind++;}
    ind=0;
    while(x-ind>=0 && ar[x-ind][y]=='*' ){shape[x-ind][y]=true;ind++;}
    ind=0;
    while(y+ind<w && ar[x][y+ind]=='*' ){shape[x][y+ind]=true;ind++;}
    ind=0;
    while(y-ind>=0 && ar[x][y-ind]=='*' ){shape[x][y-ind]=true;ind++;}
    FOR(i,0,h)
    {
        FOR(j,0,w)
        {
            if(ar[i][j]=='*' && !shape[i][j]){cout<<"NO";return 0;}
        }
    }
    cout<<"YES";
    return 0;
}
