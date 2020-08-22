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
    ll n,w;
    cin>>n>>w;
    ll ar[n];
    FOR(i,0,n)cin>>ar[i];
    ll left=0,right=w;
    ll tmp_left=0,tmp_right=w;
    FOR(i,0,n)
    {
        tmp_left-=ar[i];
        tmp_right-=ar[i];
        left=max(left,tmp_left);
        right=min(right,tmp_right);
    }
    if(right-left+1>0)cout<<right-left+1;
    else cout <<0;
    return 0;
}
