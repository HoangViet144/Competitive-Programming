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
    int t;
    cin>>t;
    while(t--)
    {
        long long p_odd=0,p_even=0,q_odd=0,q_even=0;
        int n;
        cin>>n;
        long long p[n];
        FOR(i,0,n)
        {
            cin>>p[i];
            (p[i]&1)?p_odd++:p_even++;
        }
        int m;
        cin>>m;
        long long q[m];
        FOR(i,0,m)
        {
            cin>>q[i];
            (q[i]&1)?q_odd++:q_even++;
        }
        cout<<p_odd*q_odd+p_even*q_even<<endl;
    }
    return 0;
}
