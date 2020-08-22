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
        ll n,m,k;
        cin>>n>>m>>k;
        ll ar[n];
        FOR(i,0,n)cin>>ar[i];
        bool check=false;
        FOR(i,0,n-1)
        {
            if(ar[i]>=ar[i+1])
            {
                if(ar[i+1]>=k)m+=ar[i]-(ar[i+1]-k);
                else m+=ar[i];
            }
            else
            {
                if((ar[i+1]-ar[i])>k)
                {
                    m-=ar[i+1]-k-ar[i];
                    if(m<0)
                    {
                        cout<<"NO"<<endl;
                        check=true;
                        break;
                    }
                }
                else
                {
                    if(ar[i+1]>=k)m+=ar[i]-(ar[i+1]-k);
                    else m+=ar[i];
                }
            }
        }
        if(check)continue;
        cout<<"YES"<<endl;
    }
    return 0;
}
