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
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>ar;
        FOR(i,0,n)
        {
            ll x;
            cin>>x;
            ar[x]++;
        }
        ll curMin=1000000005;
        for(map<ll,ll>::iterator i = ar.begin();i!=ar.end();i++)
        {
            if(curMin>i->second)curMin=i->second;
        }
        curMin++;
        bool check=true;
        while(curMin>1)
        {
            for(map<ll,ll>::iterator i = ar.begin();i!=ar.end();i++)
            {
                int v=i->second /(curMin-1);
                if(i->se % curMin !=0 && v*curMin < i->se)
                {
                    check=false;
                    break;
                }
            }
            if(check)break;
            else
            {
                curMin--;
                check=true;
            }
        }
        ll ans=0;
        for(map<ll,ll>::iterator i = ar.begin();i!=ar.end();i++)
        {
            ans+=ceil(i->se/(double)curMin);
        }
        cout<<ans<<endl;
    }
    return 0;
}
