#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<long long,long long>
#define fi first
#define se second
#define ll long long
#define N 1e5
#define oo 1e9

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<ll,ii > > ar;
    FOR(i,0,n)
    {
        ll x,y;
        cin>>x>>y;
        ar.push_back({x,{-1, i}}); // -1 in
        ar.push_back({y,{1, i}});  //1 out
    }
    sort(ar.begin(), ar.end());
    vector<ll>ans(n);
    vector<ll>freeRoom;
    int totalRoom=0, usedRoom=0;
    FOR(i,0,ar.size())
    {
        if(ar[i].se.fi == 1)//out
        {
            freeRoom.push_back(ans[ar[i].se.se]);
        }
        else if(freeRoom.size()==usedRoom)
        {
            ans[ar[i].se.se]= ++totalRoom;
        }
        else
            ans[ar[i].se.se]= freeRoom[usedRoom++];

    }
    cout<<totalRoom<<endl;
    FOR(i,0,n)cout<<ans[i]<<" ";
    return 0;
}
