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
ll MIN(ll a,ll b)
{
    return (a>b? b:a);
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll t1=s/n;
        s-=MIN(t1,a)*n;
        if(s>b)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
