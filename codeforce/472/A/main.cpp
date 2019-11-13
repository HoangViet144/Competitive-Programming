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
#define N 1000000

using namespace std;
bool isPrime[N+1];
void sieve(int n) {
    for(int i = 0; i <= n;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
}
int main()
{
    sieve(N);
    int n;cin>>n;
    int ind=4;
    while(true)
    {
        if(isPrime[ind]==false && isPrime[n-ind]==false)
        {
            cout<<ind<<" "<<n-ind;
            return 0;
        }
        ind++;
    }
    return 0;
}
