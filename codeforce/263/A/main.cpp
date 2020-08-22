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

int main()
{
    int ar[5][5];
    int ind_x,ind_y;
    FOR(i,0,5)FOR(j,0,5)
    {
        cin>>ar[i][j];
        if(ar[i][j])ind_x=i,ind_y=j;
    }
    cout<<abs(ind_x-2)+abs(ind_y-2);
    return 0;
}
