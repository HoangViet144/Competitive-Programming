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
        ll n,m;
        cin>>n>>m;
        ll letter[26];
        ll freq[n+1];
        string s;
        cin>>s;
        s=" "+s;
        FOR(i,0,n+1)freq[i]=0;
        FOR(i,0,m)
        {
            ll tmp;
            cin>>tmp;
            freq[1]++;
            freq[tmp+1]--;
        }
        FOR(i,1,n+1)freq[i]+=freq[i-1];
        FOR(i,0,26)letter[i]=0;
        FOR(i,1,n+1)letter[s[i]-'a']+=freq[i]+1;
        FOR(i,0,26)cout<<letter[i]<<" ";
        cout<<endl;
    }
    return 0;
}
