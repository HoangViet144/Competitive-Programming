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
int pre[1000+1];
        int check[1000+1];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        pre[0]=0;
        for(int i=1;i<=n;i++)pre[i]=pre[i-1]+ar[i-1];


        int cnt=0;


        for(int i=0;i<=n;i++)check[i]=0;

        for(int j=1;j<=n;j++)
        {
            for(int t=0;t<j-1;t++)
            {
                int tmp=pre[j]-pre[t];

                check[tmp]=1;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(check[ar[i]]){cnt++;}
        }
        cout<<cnt<<endl;
    }
    return 0;
}
