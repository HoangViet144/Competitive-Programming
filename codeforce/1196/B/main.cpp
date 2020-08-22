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

using namespace std;
int q,n,k;
int main()
{
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        int ar[n];
        int odd=0;
        FOR(i,0,n)
        {
            cin>>ar[i];
            if(ar[i]%2==1)odd++;
        }
        //cout<<"odd "<<odd<<endl;
        if(odd<k || abs((k-odd))%2==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int cnt=1;
            int cur=0;
            FOR(i,0,n)
            {
                if(cur!=k-1)
                {
                    if(ar[i]%2==1)
                    {
                        cout<<i+1<<" ";
                        cur++;
                    }
                }
                else{ cout<<n<<endl; break;}
            }

        }
    }
    return 0;
}
