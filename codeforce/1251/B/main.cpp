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
        vector<string>s;
        vector<int>siz;
        int a0=0,a1=0;
        FOR(i,0,n)
        {
            string t;
            cin>>t;
            FOR(j,0,t.length())
            {
                if(t[j]=='0')a0++;
                else a1++;
            }
            s.push_back(t);
            siz.push_back(t.size());
        }
        sort(siz.begin(),siz.end());
        int sum=(a0/2+a1/2)*2;
        int cnt=0;
        int le = a0-a0/2*2+a1-a1/2*2;
        FOR(i,0,siz.size())
        {
            if(siz[i]%2==1)
            {
                siz[i]--;
                le--;
            }
            if(le<0)
            {
                cout<<cnt<<endl;
                break;
            }
            int tmp=sum;
            sum-=siz[i];
            siz[i]-=tmp;
            if(siz[i]>0)
            {
                cout<<cnt<<endl;
                break;
            }
            else cnt++;
            if(sum<=0)
            {
                cout<<cnt<<endl;
                break;
            }
        }

    }
    return 0;
}
