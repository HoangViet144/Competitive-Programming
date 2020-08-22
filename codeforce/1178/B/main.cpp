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
ll v, wo, wow;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    string tmp="";
    int cnt=0;
    FOR(i,0,n)
    {
        if(s[i]=='o')
        {
            FOR(j,0,cnt-1)tmp+="w";
            tmp+="o";
            cnt=0;
        }
        else
        {
            cnt++;
        }
    }
    FOR(j,0,cnt-1)tmp+="w";
    //cout<<tmp<<endl;
    n=tmp.length();
    FOR(i,0,n)
    {
        if(tmp[i]=='w')
        {
            v++;
            wow+=wo;
        }
        else
        {
            wo+=v;
        }
    }
    cout<<wow;
    return 0;
}
