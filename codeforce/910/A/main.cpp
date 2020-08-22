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
    int n,d;
    cin>>n>>d;
    cin.ignore();
    string ar;
    getline(cin,ar);
    int ind=0,cnt=0;
    while(ind<n)
    {

        bool check=false;
        for(int j=d;j>=1;j--)
        {
            if(ar[ind+j]=='1')
            {
                //cout<<ind+j<<" ";
                ind=ind+j;
                check=true;
                cnt++;

                break;
            }
        }
        if(!check)
        {
            cout<<-1;
            return 0;
        }
        if(ind==n-1)break;
    }
    cout<<cnt;
    return 0;
}
