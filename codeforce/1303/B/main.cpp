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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,g,b;
        cin>>n>>g>>b;
        ll need=ceil(n/(double)2);
        n-=need;
        ll conlai=need %g;
        ll gud=need/g;
        n-=(gud-1)*b;
        if(n<0)n=0;
        if(conlai>0)
        {
            if(n<b)conlai+=b;
            else conlai+=n;
        }
        else conlai+=n;
        cout<<conlai+gud*g+(gud-1)*b<<endl;
        //cout<<need<<" "<<ceil((need/(double)g))<<" "<<need+(ceil((need/(double)g))-1)*b<<endl;
    }
    return 0;
}
