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
    string s;
    cin>>s;
    ll ans=0;
    ll n=s.length();
    FOR(i,0,n)if((int)(s[i]-'0')%4==0)ans++;
    FOR(i,0,n-1)if((s[i+1]-'0'+(s[i]-'0')*10)%4==0)ans+=i+1;
    cout<<ans;
    return 0;
}
