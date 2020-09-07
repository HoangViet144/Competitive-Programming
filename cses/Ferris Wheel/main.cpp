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
ll n,x;
int main()
{
    cin>>n>>x;
    ll ar[n];
    FOR(i,0,n)cin>>ar[i];
    sort(ar,ar+n);
    //FOR(i,0,n)cout<<ar[i]<<" ";
    int i=0,j=n-1,total=0, cnt=1,cur=ar[j];
    while(i<j)
    {
        if(cnt==2)
        {
            total++;
            j--;
            cur = ar[j];
            cnt=1;
        }
        else if(cur+ ar[i]>x)
        {
            total++;
            j--;
            cnt=1;
            cur=ar[j];

        }
        else
        {
            cnt++;
            cur+=ar[i];
            i++;
        }
    }
    cout<<total+1;
    return 0;
}
