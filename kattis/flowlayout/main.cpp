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
    while(n)
    {
        vector<pair<int,int>>ar;
        int a=0,b=0;
        while(true)
        {
            cin>>a>>b;
            if(a==-1)break;
            ar.push_back(make_pair(a,b));
        }
        int tmp=0,height_tmp=0,ans=0,width_tmp=0;
        FOR(i,0,ar.size())
        {
            if(tmp<=n)
            {
                tmp+=ar[i].first;
                height_tmp=max(height_tmp,ar[i].second);
            }
            else
            {
                width_tmp=max(width_tmp,tmp);
                tmp=0;
                ans+=height_tmp;
                height_tmp=0;
            }
        }
        cout<<width_tmp<<" x "<<height_tmp<<endl;
        cin>>n;
    }
    return 0;
}
