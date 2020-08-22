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
int n;
int main()
{
    cin>>n;
    int arr[2*n];
    FOR(i,0,2*n-1)cin>>arr[i];
    bool check=false;
    FOR(i,1,2*n-1)if(arr[i]!=arr[i-1]){check=true;break;}
    if(check)
    {
        sort(arr,arr+2*n);
        FOR(i,0,2*n-1)cout<<arr[i]<<" ";
    }
    else cout<<-1;
    return 0;
}
