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
    int n;
    cin>>n;
    int ar[n];
    int odd=0;
    FOR(i,0,n)
    {
        cin>>ar[i];
        if(ar[i]&1 )odd++;
    }
    odd/=2;
    int cnt=0;
    FOR(i,0,n)
    {
        if(ar[i]%2==0)ar[i]/=2;
        else
        {
            if(cnt<odd)
            {
                cnt++;
                ar[i]=ceil(ar[i]/(double)2);
            }
            else ar[i]=floor(ar[i]/(double)2);
        }
    }

    FOR(i,0,n)
    {
        cout<<ar[i]<<endl;
    }


    return 0;
}
