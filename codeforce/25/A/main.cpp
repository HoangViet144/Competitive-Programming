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
    int ar[n],numOdd=0;
    FOR(i,1,n)
    {
        cin>>ar[i];
        if(ar[i]%2)numOdd++;
    }
    if(numOdd>n-numOdd)
    {
        FOR(i,1,n)if(ar[i]%2==0){cout<<i;return 0;}
    }
    else
    FOR(i,1,n)if(ar[i]%2==1){cout<<i;return 0;}
    return 0;
}
