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
    int n,k;
    cin>>n>>k;
    multiset<ll> ar;
    queue<ll> init;
    FOR(i,0,k-1)
    {
        ll tmp;
        cin>>tmp;
        init.push(tmp);
        ar.insert(tmp);
    }
    FOR(i,k-1,n)
    {
        ll tmp;
        cin>>tmp;
        ar.insert(tmp);
        init.push(tmp);
        cout<<*next(ar.begin(), (k-1)/2)<<" ";

        ar.erase(init.front());
        init.pop();
    }
    return 0;
}
