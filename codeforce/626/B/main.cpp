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
int r,g,b;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R')r++;
        if(s[i]=='G')g++;
        if(s[i]=='B')b++;
    }
    if(r==0 && g==0)
    {
        cout<<"B";
        return 0;
    }
    if(r==0 && b==0)
    {
        cout<<"G";
        return 0;
    }
    if(b==0 && g==0)
    {
        cout<<"R";
        return 0;
    }
    if(b>0 && r>0 && g>0)
    {
        cout<<"BGR";
        return 0;
    }
    if(b>1 && g>1)
    {
        cout<<"BGR";
        return 0;
    }
    if(b>1 && r>1)
    {
        cout<<"BGR";
        return 0;
    }
    if(g>1 && r>1)
    {
        cout<<"BGR";
        return 0;
    }
    if(g==1 && r==1)
    {
        cout<<"B";
        return 0;
    }
    if(g==1 && b==1)
    {
        cout<<"R";
        return 0;
    }
    if(r==1 && b==1)
    {
        cout<<"G";
        return 0;
    }

    if(g>1 && b==1)
    {
        cout<<"BR";
        return 0;
    }
    if(r>1 && b==1)
    {
        cout<<"BG";
        return 0;
    }
    if(b>1 && r==1)
    {
        cout<<"GR";
        return 0;
    }
    if(g>1 && r==1)
    {
        cout<<"BR";
        return 0;
    }
    if(b>1 && g==1)
    {
        cout<<"GR";
        return 0;
    }
    if(r>1 && g==1)
    {
        cout<<"BG";
        return 0;
    }
    return 0;
}
