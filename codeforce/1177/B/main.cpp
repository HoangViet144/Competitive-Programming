#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long
using namespace std;

int main()
{
    long long k, x = 9;
	cin >> k;
	for (int i = 1; ; k -= i++ * x, x *= 10)
		if (k <= i * x) {
            long long tmp=(x/9)+(k-1)/i;
            string s=to_string(tmp);
            //cout<<s<<endl;
            return cout<<s[(k-1)%i],0;
		}

  //  return 0;
}
