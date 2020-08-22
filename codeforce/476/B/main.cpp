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
ll fastPow(ll n,ll a)
{
    if(n==1)return a;
    if(n==0)return 1;
    if(n&1)
    {
        ll tmp=fastPow(n/2,a);
        return a*tmp*tmp;
    }
    else
    {
        ll tmp=fastPow(n/2,a);
        return tmp*tmp;
    }
}
ll factorial(ll n)
{
    if(n<=1)return 1;
    else return n*factorial(n-1);
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    ll n1=0,n2=0,notKnown=0;
    FOR(i,0,s1.length())(s1[i]=='+'?n1++:n1--);
    FOR(i,0,s2.length())
    {
        if(s2[i]=='+')n2++;
        else if(s2[i]=='-')n2--;
        else notKnown++;
    }
    ll cong=(notKnown+(n1-n2))/2;
    if(notKnown==0)
    {
        if(n1==n2)cout<<1;
        else cout<<0;
        return 0;
    }
    cout<<fixed;
    cout<<setprecision(9)<<factorial(notKnown)/(factorial(cong)*factorial(notKnown-cong))/(double)fastPow(notKnown,2);
    return 0;
}
