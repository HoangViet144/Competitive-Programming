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
void solve(int &x,int &n,int &m)
{
    while(x>20 && n)
    {
        x=x/2+10;
        n--;
    }
    if(m*10>=x)
    {
        cout<<"YES"<<endl;
        return;
    }
    int a=min(n,m);
    for(int i=1;i<=a;i++)
    {
        x/=2;
        if((m-1)*10>=x)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(x==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,m,n;
        cin>>x>>n>>m;
        solve(x,n,m);
    }
    return 0;
}
