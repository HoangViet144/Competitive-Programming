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


using namespace std;
const int N=250000;
vector<ll> ar[N+5];
int visitt[N+1];
//ll getBit(ll i , ll ind)
//{
//    return (i>>ind)&1;
//}
//ll onBit(ll i, ll ind)
//{
//    return i | (1<<ind);
//}
//ll offBit(ll i, ll ind)
//{
//    return i & !(1<<ind)
//}
ll reverseBit(ll i ,ll ind)
{
    return i ^ (1<<ind);
}
bool mark[N+1];
ll L;

int main()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=0; j <19;j++)
        {
            ll tmp= reverseBit(i,j);
            if(tmp<=N)ar[i].push_back(tmp);
        }
    }
//    for(int i=1;i<=10;i++)
//    {
//        cout<<i<<" : ";
//        for(int j: ar[i])cout<<j<<" ";
//        cout<<'\n';
//    }

    while(cin>>L)
    {
        if(L==-1)break;
        mark[L]=1;
    }
    for(int i=1;i<=N;i++)
    {
        if(mark[i])
        {
            ll cnt=0;
            for(int j: ar[i])
            {
                if(j> i  && mark[j])
                {
                    cnt+= (visitt[j]!=i);
                    visitt[j]=i;
                }
                for(int t:ar[j])
                {
                    if(t >i && t!=j && mark[t])
                    {
                        cnt+= visitt[t]!=i;
                        visitt[t]=i;
                    }
                }
            }
            cout<<i<<":"<<cnt<<'\n';
        }
    }
    return 0;
}
