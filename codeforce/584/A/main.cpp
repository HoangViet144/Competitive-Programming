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
    int n,t;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1)cout<<-1;
        else
        {
            cout<<1;
            FOR(i,0,n-1)cout<<0;
        }
    }
    else FOR(i,0,n)cout<<t;
    return 0;
}
