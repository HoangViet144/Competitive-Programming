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
        string a,b,c;
        cin>>a>>b>>c;
        int n=a.length();
        bool check=false;
        FOR(i,0,n)
        {
            if(c[i]!=a[i]&&c[i]!=b[i])
            {
                check=true;
                break;
            }
        }
        if(check)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
