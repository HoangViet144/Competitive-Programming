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
    int test;
    cin>>test;
    while(test--)
    {
        ll a,b;
        cin>>a>>b;
        if ( 2*a-b >=0 && (2*a-b)%3==0)
        {
            ll x = (2*a-b)/3;
            if (a-2*x >=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout <<"NO"<<endl;
    }
    return 0;
}
