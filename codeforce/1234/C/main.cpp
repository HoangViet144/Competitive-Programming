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
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string flow[2];
        cin>>flow[0]>>flow[1];
        int ngang=0, goc=0,choice=0;
        bool check=true;
        FOR(i,0,n)
        {
            if(flow[choice][i]=='1'||flow[choice][i]=='2')continue;
            else
            {
                goc++;
                if(choice==0)choice=1;
                else choice=0;
                if(flow[choice][i]=='1'||flow[choice][i]=='2')
                {
                    cout<<"NO"<<endl;
                    check=false;
                    break;
                }
            }
        }
        if(check==false)
        {
            continue;
        }
        if(goc%2==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
