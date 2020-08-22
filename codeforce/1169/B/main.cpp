#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
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
int n,m;
int main()
{
    cin>>n>>m;
    int ar[n+1];
    FOR(i,0,n)ar[i]=0;
    vector <int>xx,yy;
    FOR(i,0,m-1)
    {
        int x,y;
        cin>>x>>y;
        xx.push_back(x);
        yy.push_back(y);
    }
    vector <int>mask;
    bool c=true;
    FOR(i,1,m-1)if(xx[i]!=xx[0]&&yy[i]!=xx[0])mask.push_back(i);
    //FOR(i,1,mask.size()-1)cout<<mask[i];
    FOR(i,0,mask.size()-1)if(xx[mask[i]]!=yy[0]&&yy[mask[i]]!=yy[0]){c=false;break;}

    bool d=true;
    FOR(i,1,m-1)if(xx[i]!=yy[0]&&yy[i]!=yy[0])maskk.push_back(i);
    return 0;
}
