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
    ll sum=0,num_0=0;
    FOR(i,0,n)
    {
        cin>>ar[i];
        if(ar[i]!=0)
        {
            sum+=abs(ar[i])-1;
            if(ar[i]>0)ar[i]=1;
            else ar[i]=-1;
        }
        else num_0++;
    }
    int tmp=1;
    FOR(i,0,n)if(ar[i]!=0)tmp*=ar[i];
    if(num_0==0)
    {
        if(tmp==1)cout<<sum;
        else cout<<sum+2;
    }
    else
    {
        cout<<sum+num_0;
    }
    return 0;
}
