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
ll get(ll m)
{
    ll ans= (1+sqrt(1+8*m))/2;
    return (ans*(ans-1)/2==m? ans:-1);
}
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll digit0=0, digit1=0;
    digit0= get(a);
    digit1= get(d);

    //cout<<digit0<<" "<<digit1<<endl;
    if(digit0==-1 || digit1==-1)
    {
        cout<<"impossible";
        return 0;
    }
    if(b+c==0)
    {
        if(a==0)digit0=0;
        else if(d==0)digit1=0;
    }
    ll n= digit0+digit1;
    if(n*(n-1)/2 != a+b+c+d)
    {
        cout<<"impossible";
        return 0;
    }
    string ans="";
    for (int i=0;i<n;i++)
    {
        if(digit1 && digit0 <=c)
        {
            ans+="1";
            c-=digit0;
            digit1 --;
        }
        else
        {
            ans+="0";
            b-=digit1;
            digit0--;
        }
    }
    if(b!=0 ||c!=0) cout<<"impossible";
    else cout<<ans;
    return 0;
}
