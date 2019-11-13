#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long

using namespace std;
int f[1000];
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    int cnt=0;
    FOR(i,1,n)
    {
        cin>>ar[i];
        if(ar[i])cnt++;
    }
    int max_cur=0,max_final=-1e5;
    FOR(i,1,n)
    {
        max_cur+=(ar[i]?-1:1);
        max_final=max(max_cur,max_final);
        if(max_cur<0)max_cur=0;
    }
    cout<<max_final+cnt;
   /* int countt=0;
    int maxx=0;
    FOR(i,1,n)
    {
        countt=0;
        FOR(j,i,n) {
            if (ar[j]==0) countt++;
            else {
                if (countt>maxx) maxx=countt;
                countt--;
                if (countt<0) countt=0;
            }
            if (j==n) {
                if (countt>maxx) maxx=countt;
            }

        }

    }
    cout<<maxx+cnt;*/
    return 0;
}
