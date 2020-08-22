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
    int n,q;
    cin>>n>>q;
    vector<string> ar[q];

    FOR(i,0,q)
    {
        string t1;
        char t2;
        cin>>t1>>t2;
        ar[t2-'a'].push_back(t1);
    }
    ll ans=ar[0].size();
    if(ar[0].size()==0)
    {
        cout<<0;
        return 0;
    }
    queue<char> qq;
    for(int i=0;i<ar[0].size();i++)
    {
        qq.push(ar[0][i][0]);
        qq.push(ar[0][i][1]);
    }
    for(int i=3;i<=n;i++)
    {
        if(qq.size()==0)
        {
            cout<<0;
            return 0;
        }
        int temp=qq.size();
        for(int j=0;j<temp;j++)
        {
            char x= qq.front();
            qq.pop();
            for(int k=0;k<ar[x-'a'].size();k++)
            {
                qq.push(ar[x-'a'][k][0]);
                qq.push(ar[x-'a'][k][1]);
            }
        }
        ans*=qq.size()/2;
    }
    cout<<ans;
    return 0;
}
