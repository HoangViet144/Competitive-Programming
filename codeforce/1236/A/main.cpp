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
        int ans=0;
        int a,b,c;
        cin>>a>>b>>c;
        c/=2;
        if(b>=c)
        {
            ans+=c*3;
            b-=c;
            b/=2;
            if(a>=b)ans+=b*3;
            else ans+=a*3;
        }
        else
        {
            ans+=b*3;
        }
        cout<<ans<<endl;
    }
    return 0;
}
