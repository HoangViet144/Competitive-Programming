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

int main()
{
    long long n;
    cin>>n;
    int x=0;
    int pro=1;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='f')
        {
            int y;
            cin>>y;
            pro*=y;
        }
        else if(s[0]=='a'){x+=pro;pro=1;}
        else if(s[0]=='e')pro=1;
    }
    cout<<x;
    return 0;
}
