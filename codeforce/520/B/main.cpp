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
int arr[10004];
bool check[10004];
//int n;
int dfs(int u,int k)
{
    if (!check[u]) {
    check[u] = true;
    if (u<0) return 10005;
    if(u==k)
        arr[u] = 0;
    else if(u>k)
            arr[u] = dfs(u-1, k) + 1;
        else
            arr[u] = min(dfs(u*2, k), dfs(u-1, k));
    if(arr[u]) return arr[u];
    }
    else arr[u] = 10005;
    return arr[u];
}
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    //cout<<dfs(n,m);

    while(n<m)
    {
        if(m%2==0)
        {
            m/=2;
            cnt++;
        }
        else
        {
            cnt++;
            m++;
        }
        if(n==m)break;
    }
    cnt+=n-m;
    cout<<cnt;


    return 0;
}
