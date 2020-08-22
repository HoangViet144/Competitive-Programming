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
#define oo 1e7

using namespace std;
ll a=oo,b=oo,c=oo,ab=oo,bc=oo,ac=oo,abc=oo;
int main()
{
    int n;
    cin>>n;
    FOR(i,0,n)
    {
        ll tmp;
        string s;
        cin>>tmp>>s;
        sort(s.begin(),s.end());
        if(s=="A") a=min(a, tmp);
        if(s=="B") b=min(b, tmp);
        if(s=="C") c=min(c, tmp);
        if(s=="AB") ab=min(ab, tmp);
        if(s=="BC") bc=min(bc, tmp);
        if(s=="AC") ac=min(ac, tmp);
        if(s=="ABC") abc=min(abc, tmp);
    }
    if(min(min(min(min(min(min(min(a+b+c,abc),a+bc),b+ac),c+ab),ab+bc),ab+ac),bc+ac)>=oo)cout<<-1;
    else cout<<min(min(min(min(min(min(min(a+b+c,abc),a+bc),b+ac),c+ab),ab+bc),ab+ac),bc+ac);
    return 0;
}
