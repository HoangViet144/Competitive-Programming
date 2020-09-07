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
    int n;
    cin>>n;
    deque<ll> curQueue;
    set<ll> s;
    int ans=0;
    FOR(i,0,n)
    {
        ll tmp;
        cin>>tmp;
        if(s.find(tmp)== s.end())
        {
            curQueue.push_back(tmp);
            s.insert(tmp);
        }
        else
        {
            while(curQueue.front() != tmp)
            {
                s.erase(curQueue.front());
                curQueue.pop_front();
            }
            curQueue.pop_front();
            curQueue.push_back(tmp);
        }
        ans= max (ans, (int)curQueue.size());
    }
    cout<<ans;
    return 0;
}
