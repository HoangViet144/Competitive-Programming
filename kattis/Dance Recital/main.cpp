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
ll f[10][1024];
vector<string>ar;
ll cost[10][10];
int main()
{
    int r;
    cin>>r;

    for(int i=0;i<r;i++)
    {
        string s;
        cin>>s;
        ar.push_back(s);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<1024;j++)
        {
            f[i][j]= LONG_MAX;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            for(char c1: ar[i])
            {
                for(char c2: ar[j])
                {
                    if(c1==c2)
                    {
                        cost[i][j]++;

                    }
                }
            }
        }
    }
    for(int i = 0; i<r;i++)
    {
        f[i][1<<i] =0;
    }
    for(int mask=0 ; mask < 1<<r ; mask++)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                if(i==j)continue;
                if(((mask >> i) & 1) ==0 )continue;
                if((mask >> j) & 1) continue;
                int mask_tmp= mask + (1<<j);
                f[j][mask_tmp] = min(f[j][mask_tmp], f[i][mask]+cost[i][j]);
            }
        }
    }
    ll ans= f[0][(1<<r)-1];
    for(int i=0;i<r;i++) ans= min(ans, f[i][(1<<r)-1]);
    cout<<ans;
    return 0;
}


