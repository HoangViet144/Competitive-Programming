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
        int n;
        cin>>n;
        int diff[n],aa[n],b[n];
        FOR(i,0,n)
        {
            cin>>aa[i];
        }
        FOR(i,0,n)cin>>b[i];
        FOR(i,0,n)diff[i]=aa[i]-b[i];
        bool c=false;
        bool done=false;
        int a=0;
        FOR(i,0,n)
        {
            if(!c)
            {
                if(diff[i]!=0)
                {
                    c=true;
                    a=diff[i];
                }
            }
            else
            {
                if(diff[i]!=a && diff[i]!=0)
                {
                    cout<<"NO"<<endl;
                    done=true;
                    break;
                }
            }
        }
        if(a>0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(!done)
            cout<<"YES"<<endl;
    }
    return 0;
}
