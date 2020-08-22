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
#define N 1005

using namespace std;

int n;
bool ar[N];
int main()
{
    cin>>n;
    int a,b,x;
    cin>>a;
    FOR(i,0,a)
    {
        cin>>x;
        ar[x]=1;
    }
    cin>>b;
    FOR(i,0,b)
    {
        cin>>x;
        ar[x]=1;
    }
    FOR(i,1,n+1)
    {
        if(ar[i]==0){cout<<"Oh, my keyboard!";return 0;}
    }
    cout<<"I become the guy.";
    return 0;
}
