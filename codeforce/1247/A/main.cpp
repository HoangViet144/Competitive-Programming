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
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a*10<<" "<<a*10+1;
    }
    else if(a+1==b)
    {
        cout<<a<<" "<<b;
    }
    else cout<<-1;
    return 0;
}
