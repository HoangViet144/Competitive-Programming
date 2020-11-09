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
    while(true)
    {
        int n,m;
        cin>>n>>m;
        if(n==0 && m==0) break;
        int dragon[n],knight[m];
        for(int i=0;i<n;i++) cin>>dragon[i];
        for(int i=0;i<m;i++) cin>>knight[i];
        sort(dragon, dragon+n);
        sort(knight, knight+m);
        int ans=0;
        int ind=0;
        bool lose=false;
        for(int i=0;i<n;i++)
        {
            while(ind <m && knight[ind] <dragon[i]) ind++;
            if(ind <m && knight[ind] >=dragon[i])
            {
                ans+= knight[ind];
                ind++;
            }
            else
            {
                lose=true;
            }
        }
        if(lose)cout<<"Loowater is doomed!\n";
        else cout<<ans<<"\n";
    }
    return 0;
}
