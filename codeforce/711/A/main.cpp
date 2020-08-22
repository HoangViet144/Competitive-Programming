#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
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
    int n;
    cin>>n;
    vector<string>zs;
    FOR(i,0,n)
    {
        string tmp;cin>>tmp;
        zs.push_back(tmp);
    }
    bool check=false;
    FOR(i,0,n)
    {
        if(zs[i][0]=='O' && zs[i][1]=='O'){zs[i][0]='+'; zs[i][1]='+';check=true;break;}
        else if(zs[i][3]=='O' && zs[i][4]=='O'){zs[i][3]='+'; zs[i][4]='+';check=true;break;}
    }
    if(check)cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
    FOR(i,0,n)cout<<zs[i]<<endl;
    return 0;
}
