#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
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
    int k;
    cin>>k;
    int ar[12];
    FOR(i,0,12)cin>>ar[i];
    sort(ar,ar+12,greater<int>());
    FOR(i,0,12)
    {
        if(k>0)
        {
            k-=ar[i];
        }
        else
        {
            cout<<i;
            return 0;
        }
    }
    if(k<=0)cout<<12;
    else cout<<-1;
    return 0;
}
