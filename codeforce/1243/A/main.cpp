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
    int k;
    cin>>k;
    while(k--)
    {
        int n;
        cin>>n;
        int ar[n];
        FOR(i,0,n)cin>>ar[i];
        sort(ar,ar+n);
        int i;
        for(i=n-1;i>=0;--i)
        {
            if(ar[i]>=n-i)continue;
            else
            {
                cout<<n-i-1<<endl;
                break;
            }
        }
        if(i==-1)cout<<n<<endl;
    }
    return 0;
}
