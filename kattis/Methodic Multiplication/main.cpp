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
    string a,b;
    cin>>a>>b;
    int s1=0, s2=0;
    for(char &c: a)
    {
        if(c=='S')s1++;
    }
    for(char &c: b)
    {
        if(c=='S')s2++;
    }
    int finalS= s1*s2;
    string ans="";
    for(int i=0;i<finalS;i++)
    {
        ans+="S(";
    }
    ans+="0";
    for(int i=0;i<finalS;i++) ans+=")";
    cout<<ans;
    return 0;
}
