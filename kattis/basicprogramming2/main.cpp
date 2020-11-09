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
    ll n,t;
    cin>>n>>t;
    vector<ll>ar(n,0);
    for(int i=0;i<n;i++)cin>>ar[i];
    if(t==1)
    {
        sort(ar.begin(),ar.end());
        for(int i=0;i<n;i++)
        {
            if(ar[i]>7777)continue;
            auto it= lower_bound(ar.begin(), ar.end(),7777-ar[i]);
            if(it!= ar.end() && (*it)==7777- ar[i])
            {
                cout<<"Yes";
                return 0;
            }
        }
        cout<<"No";
    }
    if(t==2)
    {
        sort(ar.begin(),ar.end());
        ar.resize(unique(ar.begin(), ar.end())- ar.begin());
        if(ar.size()==n)cout<<"Unique";
        else cout<<"Contains duplicate";
    }
    if(t==3)
    {
        map<ll,ll> freq;
        for(int i=0;i<n;i++)freq[ar[i]]++;
        for(auto it= freq.begin() ; it != freq.end() ; it++)
        {
            if(it->se >n/2)
            {
                cout<<it->fi;
                return 0;
            }
        }
        cout<<-1;
    }
    if(t==4)
    {
        sort(ar.begin(),ar.end());
        if(n&1)
        {
            cout<<ar[n/2];
        }
        else cout<< ar[n/2-1]<<" "<<ar[n/2];
    }
    if(t==5)
    {
        sort(ar.begin(),ar.end());
        for(ll& i : ar) if(i>= 100 && i<=999) cout<<i<<" ";
    }
    return 0;
}
