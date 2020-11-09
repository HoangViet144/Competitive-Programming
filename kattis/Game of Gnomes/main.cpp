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

int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll damage=0;
    for(ll sizeK = max(0,(int)ceil((double)n/k-m)); sizeK <=n/k;sizeK++)
    {
        ll curDamage=0;

        ll remain = n- sizeK*k;
         if(remain!=0)
         {
             ll roundDown = floor((double)remain/m);
        ll roundUp = ceil((double)remain/m);
        if(roundDown == roundUp)
        {
            ll tmp= remain/roundDown;
            curDamage+=roundDown*(tmp+1)*tmp/2;
        }
        else
        {
            ll ab= roundDown*1- roundUp*1;
            ll cb= remain*1 - roundUp*m;
            ll ac= roundDown*m-1*remain;
            if(ab==0)continue;
            if(cb%ab!=0 || ac%ab!=0)continue;

            ll x= cb/ab;
            ll y= ac/ab;
            curDamage += remain*(x+y+1) - roundUp*y*(y+1)/2 - roundUp*x*y - roundDown*x*(x+1)/2;
        }

         }

        curDamage += remain*sizeK +k*sizeK*(sizeK+1)/2;
        damage= max(damage,curDamage);
    }
    cout<<damage;
    return 0;
}
