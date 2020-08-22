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
        int n;
        cin>>n;
        if(n<=3)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int>ar;
        for(int i=1;i<=n;i++)
            if(i%2==1)ar.push_back(i);
        for(int i=n;i>=1;i--)
            if(i%2==0)ar.push_back(i);
        int ind=0;
        for(int i=0;i<n;i++)
            if(ar[i]==n)ind=i;
        if(n%2==0)swap(ar[ind-1],ar[ind-2]);
        else swap(ar[ind+1],ar[ind+2]);
        for(int i=0;i<n;i++)cout<<ar[i]<<" ";
        cout<<endl;
    }
    return 0;
}
