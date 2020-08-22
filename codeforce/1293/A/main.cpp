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
#define N 1000000009

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s,k;
        cin>>n>>s>>k;
        vector<ll>ar;
        FOR(i,0,k)
        {
            ll tmp;
            cin>>tmp;
            ar.push_back(tmp);
        }
        for(int i=0;i<=k;i++)
        {
            if(s-i>=1 && find(ar.begin(), ar.end(),s-i)==ar.end())
            {
                cout<<i<<endl;
                break;
            }
            if(s+i<=n && find(ar.begin(), ar.end(),s+i)==ar.end())
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
