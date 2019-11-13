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
    int n;
    cin>>n;
    while(true)
    {
        n++;
        string s=to_string(n);
        sort(s.begin(),s.end());
        bool check=true;
        FOR(i,0,3)if(s[i]==s[i+1]){check=false;break;}
        if(check){cout<<n;return 0;}
    }
    return 0;
}
