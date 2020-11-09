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
vector<ii>ans;
ll l,m;
int main()
{
    ll price=LONG_MAX;
    string s;
    getline(cin,s);
    int tmp= s.find(' ');
    l= stoi(s.substr(0,tmp));
    m= stoi(s.substr(tmp+1));
    for(int i=0;i<m;i++)
    {

        getline(cin,s);
        int ind = s.find(',');
        string name= s.substr(0,ind);

        s= s.substr(ind+1);
        ind = s.find(',');
        ll p = stol(s.substr(0,ind));
        s= s.substr(ind+1);
        ind = s.find(',');
        ll c = stol(s.substr(0,ind));

        s= s.substr(ind+1);
        ind = s.find(',');
        ll t = stol(s.substr(0,ind));

        s= s.substr(ind+1);
        ll r= stol(s);

        ll n= (10080)*t*c/(t+r);
       // cout<<n<<" "<<n*t*c<<endl;
        if(n >=l)
        {
            price= min(price,p);
            ans.push_back({name,p});
        }
    }
    for(ii&name: ans)
    {
        if(name.se==price)
            cout<<name.fi<<'\n';
    }
    if(ans.size()==0)cout<<"no such mower";
    return 0;
}
