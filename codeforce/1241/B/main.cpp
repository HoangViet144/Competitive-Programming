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
int ar1[27],ar2[27];
int main()
{

    string s,t;
    int q;
    cin>>q;
    while(q--)
    {
        FOR(i,0,27)ar1[i]=0,ar2[i]=0;
        cin>>s>>t;
        FOR(i,0,s.length())
        {
            ar1[s[i]-'a']++;
            ar2[t[i]-'a']++;
        }
        bool check=false;
        FOR(i,0,27)
        if(ar1[i]>=1&&ar2[i]>=1)
        {
            check=true;
            break;
        }
        if(check)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
