#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(long long i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long
#define N 500001

using namespace std;
ll ar[N];
ll indL[N];
ll indR[N];
ll L[N],R[N];
int main()
{
    ll n;
    cin>>n;

    FOR(i,0,n)cin>>ar[i];

    stack<ll>q;
    FOR(i,0,n)
    {
        while(!q.empty() && ar[q.top()]>=ar[i])q.pop();
        if(q.empty())indL[i]=i;
        else indL[i]=q.top();
        q.push(i);
    }

    stack<ll>q1;
    FORD(i,n-1,0)
    {
        while(!q1.empty() && ar[q1.top()]>=ar[i])q1.pop();
        if(q1.empty())indR[i]=i;
        else indR[i]=q1.top();
        q1.push(i);
    }

    FOR(i,0,n)
    {
        ll minL=indL[i];
        if(ar[i]<=ar[minL])L[i]=(i+1)*ar[i];
        else L[i]=(i-minL)*ar[i]+L[minL];
    }
    FORD(i,n-1,0)
    {
        ll minR=indR[i];
        if(ar[i]<=ar[minR])R[i]=(n-1-i+1)*ar[i];
        else R[i]=(minR-i)*ar[i]+R[minR];
    }
    ll ans=0,ind=0;
    FOR(i,0,n)if(ans<L[i]+R[i]-ar[i]){ind=i;ans=L[i]+R[i]-ar[i];}
    ll res[n];
    res[ind]=ar[ind];
    FOR(i,ind+1,n)res[i]=min(ar[i],res[i-1]);
    FORD(i,ind-1,0)res[i]=min(ar[i],res[i+1]);
    //cout<<ans<<endl;
    FOR(i,0,n)cout<<res[i]<<" ";
    return 0;
}
