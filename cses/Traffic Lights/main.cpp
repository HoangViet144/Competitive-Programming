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
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
    ll x,n;
    cin>>x>>n;
    multiset<ll> len ={x};
    set<ll> p={0,x};
    FOR(i,0,n)
    {
        ll cur;
        cin>>cur;
        auto it= p.lower_bound(cur);
        int left= *prev(it);
        int right = *it;
        len.erase(len.find(right-left));
        len.insert(right-cur);
        len.insert(cur-left);
        p.insert(cur);
        cout<<*len.rbegin()<<" ";
    }
    return 0;
}
