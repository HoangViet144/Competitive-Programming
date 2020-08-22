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
        int n,k;
        cin>>n>>k;
        if(n%2==1)
        {
            if(n<k || k%2==0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)cout<<1<<" ";
            cout<<n-(k-1)<<endl;
        }
        else
        {
            if(k%2==0)
            {
                if(n<k)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
            else
            {
                if(n<k*2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)cout<<2<<" ";
                cout<<n-(k-1)*2<<endl;
            }
        }
    }
    return 0;
}
