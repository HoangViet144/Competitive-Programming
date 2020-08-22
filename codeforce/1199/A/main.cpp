#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <(b); i++)
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
int n,x,y;
int main()
{
    cin>>n>>x>>y;
    int ar[n];
    FOR(i,0,n)cin>>ar[i];
    FOR(i,0,n)
    {
//        int i=2;
        bool check=true;
        FOR(j,i-x,i+y+1)
        {
            if(j>=0 && j<n && ar[j]<=ar[i]&& j!=i)
            {
                check=false;break;
            }
        }
        if(check){cout<<i+1;return 0;}
    }
    //cout<<"can";
    return 0;
}
