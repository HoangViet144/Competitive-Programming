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
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.second==b.second)return (a.first<b.first);
    return (a.second < b.second);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int>>birth;
        FOR(i,0,10)
        {
            int x;
            cin>>x;
            birth.push_back(make_pair(i,x));
        }

        sort(birth.begin(), birth.end(), sortbysec);
        //FOR(i,0,10)cout<<birth[i].first<<" "<<birth[i].second<<endl;
        if(birth[0].first==0)
        {
            if(birth[0].second==0)
            {
                bool check=false;
                int ind=1;
                for(ind;ind<=9;ind++)
                {
                    if(birth[ind].second==0)
                    {
                        cout<<birth[ind].first<<endl;
                        check=true;
                        break;
                    }
                }
                if(check)continue;
                cout<<10;
            }
            else
            {
                bool check=false;
                int ind=1;
                for(ind;ind<=9;ind++)
                {
                    if(birth[ind].second==0)
                    {
                        cout<<birth[ind].first<<endl;
                        check=true;
                        break;
                    }
                }
                if(check)continue;
                if(birth[1].second==birth[0].second)
                {
                    for(int t=1;t<=birth[1].second+1;t++)cout<<birth[1].first;
                }
                else
                {
                    cout<<1;
                    for(int t=1;t<=birth[0].second+1;++t)cout<<birth[0].first;
                }
            }
        }
        else
        {
            for(int i=1;i<=birth[0].second+1;i++)cout<<birth[0].first;
        }
        cout<<endl;
    }
    return 0;
}
