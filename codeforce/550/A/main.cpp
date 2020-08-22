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
    string s;
    cin>>s;
    int ind=s.find("AB");
    if(ind==-1)
    {
        cout<<"NO";
        return 0;
    }
    s[ind]='X';
    s[ind+1]='X';
    bool check=true;
    if(s.find("BA")==-1)check=false;
    if(check)
    {
        cout<<"YES";
        return 0;
    }
    s[ind]='A';
    s[ind+1]='B';
    ind=s.find("BA");
    if(ind==-1)
    {
        cout<<"NO";
        return 0;
    }
    s[ind]='X';
    s[ind+1]='X';
    if(s.find("AB")==-1)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}
