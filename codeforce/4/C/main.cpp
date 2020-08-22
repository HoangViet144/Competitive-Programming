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
#define N 100005

using namespace std;
int n;
map <string,int> name;
int main()
{
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        string x=s;
        if(name.count(s))
        {
            string tmp=s+to_string(name[s]);
            name[s]++;
            cout<<tmp<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
            name[s]=1;
        }
    }
    return 0;
}

