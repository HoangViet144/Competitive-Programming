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
    ll ar[n];
    FOR(i,0,n)cin>>ar[i];
    set<ll> que;
    if(ar[0]<0)
    {
        cout<<-1;
        return 0;
    }
 /*   que.insert(ar[0]);
    pre[0]=true;*/
    ll day=0;
    ll cur_sum=0;
    vector<ll>c;
    c.push_back(0);
    FOR(i,0,n)
    {
        if(ar[i]>0)
        {
            if(pre[i])
            {
                cout<<-1;
                return 0;
            }
            que.insert(ar[i]);
            pre[i]=true;
        }
        else
        {
            if(que.find(-ar[i])==que.end())
            {
                cout<<-1;
                return 0;
            }
            que.erase(-ar[i]);
            pre[i]=false;
        }
        if(que.size()==0)
        {
            day++;
            c.push_back(i+1-cur_sum);
            cur_sum+=c[c.size()-1];
        }
    }
    if(que.size()!=0)
    {
        cout<<-1;
        return 0;
    }
    cout<<day<<endl;
    FOR(i,1,c.size())cout<<c[i]<<" ";
    return 0;
}
