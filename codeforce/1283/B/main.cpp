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
        ll n,k;
        cin>>n>>k;
        if(n%k==0)cout<<n<<endl;
        else
        {
            int a=n/k;
            int tmp=n%k;
            if(tmp<=k/2)cout<<n<<endl;
            else cout<<(a+1)*(k/2)+a*(k-k/2)<<endl;
        }
    }
    return 0;
}
