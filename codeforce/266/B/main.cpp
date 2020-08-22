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

using namespace std;

int main()
{
    int n,t;
    string s;
    cin>>n>>t>>s;
    while(t--)
    {
        string tmp=s;
        FOR(i,0,n-1)
        {
            if(s[i]=='B' && s[i+1]=='G')swap(tmp[i],tmp[i+1]);
        }
        s=tmp;
    }
    cout<<s;
    return 0;
}
