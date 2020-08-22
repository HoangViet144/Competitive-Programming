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
long long mod=1000000007;
long long fibo(long long n)
{
    long long prev=1,cur=1,next=1;
    while(n>1)
    {
        next=(cur+prev)%mod;
        prev=cur;
        cur=next;
        n--;
    }
    return cur;
}
int main()
{
    long long n,m;
    cin >>n>>m;
    cout<<2*(fibo(n)+fibo(m)-1)%mod;
    return 0;
}
