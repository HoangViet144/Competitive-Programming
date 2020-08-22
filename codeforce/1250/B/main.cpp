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
    long long n,k;
    cin>>n>>k;
    long long mem[k+1];
    FOR(i,0,k+1)mem[i]=0;
    FOR(i,0,n)
    {
        long long tmp;
        cin>>tmp;
        mem[tmp-1]++;
    }
    sort(mem,mem+k);
    int num_of_team=0;
    FOR(i,0,k)if(mem[i]>0)num_of_team++;
    if(num_of_team%2==0)
    {
        long long ans=0;
        FOR(i,0,k)
        {
            if(mem[i]>0)
                ans=max(ans,mem[i]+mem[k-1-i]);
        }
        cout<<min(num_of_team*mem[k-1],ans*num_of_team/2)<<endl;
    }
    else
    {
        long long ans=0;
        FOR(i,0,k-1)
        {
            if(mem[i]>0)
                ans=max(ans,mem[i]+mem[k-2-i]);
        }
        ans=max(ans,mem[k-1]);
       // cout<<ans<<endl;
        cout<<ans*(num_of_team/2+1)<<endl;
    }
    return 0;
}
