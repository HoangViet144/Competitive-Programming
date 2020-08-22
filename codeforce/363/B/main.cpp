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
    int n,k;
    cin>>n>>k;
    int ar[n];
    FOR(i,0,n)cin>>ar[i];
    int sum=0;
    FOR(i,0,k)sum+=ar[i];
    int tmp=sum;
    int ind=0;
    FOR(i,1,n-k+1)
    {
        tmp=tmp-ar[i-1]+ar[i+k-1];
        if(tmp<sum)
        {
            sum=tmp;
            ind=i;
        }
    }
    cout<<ind+1;
    return 0;
}
