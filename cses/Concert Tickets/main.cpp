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
    multiset<int,greater<int>> ticket;
    int n,m;
    cin>>n>>m;
    FOR(i,0,n)
    {
        int tmp;
        cin>>tmp;
        ticket.insert(tmp);
    }
    FOR(i,0,m)
    {
        int t;
        cin>>t;
        auto it=ticket.lower_bound(t);
        if (it!= ticket.end())
        {
            cout<<*it<<endl;
            ticket.erase(it);
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
