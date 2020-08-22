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
        int ar[n];
        int odd=0,even=0;
        FOR(i,0,n)
        {
            cin>>ar[i];
            if(ar[i]&1)odd++;
            else even++;
        }
        if(even==0 && odd%2==1)cout<<"YES"<<endl;
        else if(even==0 && odd%2==0)cout<<"NO"<<endl;
        else if(odd==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
