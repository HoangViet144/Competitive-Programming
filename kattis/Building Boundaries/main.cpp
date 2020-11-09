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
struct rec
{
    ll x,y;
};
void solve()
{
    ll area= 1e25;
    ll x[3],y[3];
    cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2];
    ll index[]={0,1,2};
    do
    {
        for(int i=1;i<=8;i++)
        {
            ll a[3],b[3];
            for(int j=0;j<3;j++)
            {
                a[j]= x[index[j]];
                b[j] =y[index[j]];
            }
            ll dai = a[1]+a[2]+a[0];
            ll rong = max(b[1],max(b[2],b[0]));
            area=min(area, dai*rong);
            if(b[0]>=b[1])
            {
                dai= max(a[2],a[0]+a[1]);
                rong= b[0]+b[2];
                area=min(area, dai*rong);
            }
            if(b[0] >= b[1]+b[2])
            {
                rong= b[0];
                dai= a[0]+ max(a[1],a[2]);
                area=min(area, dai*rong);
            }
            if(i==4)swap(x[0],y[0]);
            if(i==2 || i==4 || i==6)swap(x[1],y[1]);
            swap(x[2],y[2]);
        }
    }
    while(next_permutation(index, index+3));
    cout<<area<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
