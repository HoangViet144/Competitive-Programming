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
long long n,t;
string s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(n<8)cout<<"NO"<<endl;
        else{
            int t=1;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='8'&&i<=n-1-10){t=0;break;}
            }
            if(t==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
