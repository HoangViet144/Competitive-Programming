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
    int t=0;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        int A=-1,B=-1,C=-1;
        int ans=1e9;
        for(int ta=1;ta<=2*a;ta++)
        {
            for(int tb=ta;tb<=2*b;tb+=ta)
            {
                for(int i=0;i<=1;i++)
                {
                    int tc=tb*(c/tb)+i*tb;
                    if((abs(a-ta)+abs(b-tb)+abs(c-tc))<ans)
                    {
                        ans=abs(a-ta)+abs(b-tb)+abs(c-tc);
                        A=ta;
                        B=tb;
                        C=tc;
                    }
                }
            }
        }
        cout<<ans<<endl;
        cout<<A<<" "<<B<<" "<<C<<endl;
    }
    return 0;
}
