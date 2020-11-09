#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<string,int>
#define fi first
#define se second
#define ll long long
#define N 1e5

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string lastAni;
    cin>>lastAni;
    char lastCharAni = lastAni[(int)lastAni.length()-1];
    int n;
    cin>>n;
    vector<string> animal(n);
    vector<ii> posAns;
    for(int i=0;i<n;i++)
    {
        cin>>animal[i];
        if(animal[i][0]== lastCharAni) posAns.push_back({animal[i],i});
    }
    if(posAns.empty())
    {
        cout<<"?";
        return 0;
    }
    for(int i=0;i<(int)posAns.size();i++)
    {
        //cout<<posAns[i].fi <<" " <<posAns[i].se<<'\n';
        bool check=false;
        for(int j=0;j<n;j++)
        {
            if(posAns[i].se== j)continue;
            if(animal[j][0] == posAns[i].fi[(int)posAns[i].fi.size()-1])
            {
                check=true;
                break;
            }
        }
        if(!check)
        {
            cout<<posAns[i].fi<<"!";
            return 0;
        }
    }
    cout<<posAns[0].fi;
    return 0;
}
