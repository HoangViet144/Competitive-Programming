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
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long cnt=0;
        while(n>0)
        {
            while(n%k==0){cnt++;n/=k;}
            if(n%k!=0)
            {

                long long s=n-n/k*k;

                cnt+=s;
                n-=s;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
