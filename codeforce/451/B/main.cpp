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
    FOR(i,0,n)cin>>ar[i];
    int check=0;
    int ind1,ind2=-1;
    FOR(i,0,n-1)
    {
        if(ar[i]<=ar[i+1])
        {
            if(!check)continue;
            else if(check==1)
            {
                ind2=i+1;
                check++;
            }
            else if(check>2)
            {
                cout<<"NO";
                return 0;
            }
        }
        else
        {
            if(!check)
            {
                ind1=i+1;
                check++;
            }
            else if(check==1) continue;
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    if(ind2==-1)ind2=n;
    cout<<"YES"<<endl;
    cout<<ind1<<" "<<ind2;
    return 0;
}
