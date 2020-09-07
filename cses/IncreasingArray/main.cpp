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
ll  n,res=0;
vector<ll> ar(2000000);
int main()
{
    cin>>n;
    for(int i=0; i<n;i++)
        cin>>ar[i];

    for (int i=1;i<n;i++)
    {
        if(ar[i]<ar[i-1])
        {
            res+=ar[i-1]-ar[i];
            ar[i]= ar[i-1];
        }
    }
    cout<<res;
    return 0;
}
