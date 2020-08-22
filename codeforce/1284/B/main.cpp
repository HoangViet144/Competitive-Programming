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
bool checkDescent(vector<ll>tmp)
{
    if(tmp.size()==1)return true;
    bool check=true;
    FOR(i,1,tmp.size())
    {
        if(tmp[i-1]<tmp[i])
        {
            check=false;
            break;
        }
    }
    return check;
}
bool cmp(vector<ll>a, vector<ll>b)
{
    return a[0]<b[0];
}
int main()
{
    int n;
    cin>>n;
    vector<vector<ll>> Ascent,NotAscent;
    FOR(i,0,n)
    {
        ll l;
        cin>>l;
        vector<ll>tmp(l);
        FOR(j,0,l)cin>>tmp[j];
        if(checkDescent(tmp))NotAscent.push_back(tmp);
        else Ascent.push_back(tmp);
    }
    ll a=Ascent.size(), b= NotAscent.size();
    ll ans=a*a+2*a*b;
    sort(NotAscent.begin(),NotAscent.end(),cmp);
    vector<ll>a_des;
    ll ans_tmp=0;
    FOR(i,0,b)
    {
        a_des.push_back(NotAscent[i][0]);
    }
    vector<ll>::iterator low1;
    FOR(i,0,b)
    {
        ll cur=NotAscent[i][NotAscent[i].size()-1];
        ll tmp= upper_bound(a_des.begin(), a_des.end(), cur)-a_des.begin();
        ans_tmp+=tmp;
    }
    cout<<ans+b*b-ans_tmp;
    return 0;
}
