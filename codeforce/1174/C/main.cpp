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
int n;
long long a[5000000];
int cnt=1;
int main()
{
    cin>>n;
    FOR(i,2,n)
    {
        if(a[i]==0)
        {
            int j=i;
            while(j<n+1)
            {
                a[j]=cnt;
                j+=i;
            }
            cnt++;
        }

    }
    FOR(i,2,n)cout<<a[i]<<" ";
    return 0;
}
