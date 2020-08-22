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
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int ar[n];
        FOR(i,0,n)cin>>ar[i];
        sort(ar,ar+n);
        bool check=false;
        FOR(i,1,n)
        {
            if(ar[i]==ar[i-1]+1)
            {
                check=true;
                break;
            }
        }
        if(check)cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
