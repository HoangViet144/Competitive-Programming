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
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<ll>ind;
    vector<ll>val;
    FOR(i,0,n)
    {
        if(a[i]!=b[i])
        {
            ind.push_back(i);
            val.push_back(a[i]);
        }
    }
    int ans=0;
//    if(ind.size()==1)
//    {
//        cout<<1;
//        return 0;
//    }
    FOR(i,0,ind.size())
    {
        if(i==ind.size()-1)ans++;
        else if((ind[i+1]-ind[i])==1 && val[i+1]!=val[i])
        {
            ans++;
            i++;
        }
        else ans++;
    }
    cout<<ans;
    return 0;
}
