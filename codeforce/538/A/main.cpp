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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        if((c+n-b+a-b)%3!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll B=(c+n-b+a-b)/3;
        ll A=b+B-a;
        ll C=n-A-B;
        if(A<0 || B<0||C<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
