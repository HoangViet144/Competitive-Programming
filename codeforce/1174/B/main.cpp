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

int main()
{
    int n;
    cin>>n;
    /*int ar[n];
    FOR(i,0,n-1)cin>>ar[i];
    int even=0;
    int odd=0;
    FOR(i,0,n-1)
    {
        if(ar[i]%2==0)even++;
        else odd++;

    }
   // FOR(i,0,n-1)if(ar[i]%2==1){check2=false;break;}
    if(even==n || odd==n)
    {
         FOR(i,0,n-1)cout<<ar[i]<<" ";

    }
    else
    {
        sort(ar,ar+n);
        FOR(i,0,n-1)cout<<ar[i]<<" ";
    }*/
    int ar[n];
    ar[0]=0;
    ar[1]=1;
    FOR(i,1,n-1)
    {
        ar[i]=1;
        FOR(j,1,i-1)if(__gcd(i+1,j+1)==1)ar[i]++;
    }
    FOR(i,1,n-1)cout<<ar[i]<<" ";
    return 0;
}
