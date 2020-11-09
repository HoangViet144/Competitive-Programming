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
int k,q;
struct node
{
    ll t,a,b;
};
node faucet[15];
ll minFlow, maxFlow,minTemp, maxTemp;
bool cmp(node A, node B)
{
    return A.t<B.t;
}
int main()
{
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>faucet[i].t>>faucet[i].a>>faucet[i].b;
        minFlow+= faucet[i].a;
        minTemp+= faucet[i].a*faucet[i].t;
        maxFlow+= faucet[i].b;
        maxTemp+= faucet[i].b*faucet[i].t;
    }
    sort(faucet, faucet+k,cmp);
    cin>>q;
    for(int i=0;i<q;i++)
    {
        ll temp, flow;
        cin>>temp>>flow;
        temp*=flow;
        if(flow < minFlow || flow>maxFlow || temp<minTemp || temp>maxTemp)
        {
            cout<<"no\n";
            continue;
        }
        ll cur= minFlow;
        ll minRangeTemp = minTemp;
        for(int i=0;i<k;i++)
        {
            if(cur>flow)break;
            minRangeTemp += faucet[i].t * max(0ll,min(faucet[i].b- faucet[i].a, flow- cur));
            cur+=max(0ll,min(faucet[i].b- faucet[i].a, flow- cur));
        }
        cur= minFlow;
        ll maxRangeTemp = minTemp;
        for(int i=k-1;i>=0;i--)
        {
            if(cur>flow)break;
            maxRangeTemp += faucet[i].t * max(0ll,min(faucet[i].b- faucet[i].a, flow- cur));
            cur+=max(0ll,min(faucet[i].b- faucet[i].a, flow- cur));
        }
        if(minRangeTemp <= temp && temp<= maxRangeTemp)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
