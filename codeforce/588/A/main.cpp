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
    int n;
    cin>>n;
    int a[n],price[n];
    int cur_price=1000;
    int total=0;
    REP(i,n)
    {
        cin>>a[i]>>price[i];
        cur_price=min(cur_price,price[i]);
        total+=a[i]*cur_price;
    }
    cout<<total;
    return 0;
}
