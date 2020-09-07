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
#define N 200005

using namespace std;
struct query
{
    int left,right,ind;
};
query Q[N];
int ar[N];
int n,q;
int ans[N];
bool cmp(query A, query B)
{
    int s= 555;
    if(A.left/s != B.left/s) return A.left/s < B.left/s;
    return A.right < B.right;
}
int cntUnique=0;
map<int,int> compress;
vector<int> freq(N,0);
void add(int& item)
{
    if(freq[item]==0) cntUnique++;
    freq[item] ++;
}
void removee(int&item)
{
    freq[item]--;
    if(freq[item] ==0)cntUnique--;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin>>n>>q;
    int cnt=1;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        if(compress.find(ar[i])!= compress.end())
            ar[i] = compress[ar[i]];
        else
        {
            compress[ar[i]] = cnt;
            ar[i] = cnt++;
        }
    }
    for(int i=0;i<q;i++)
    {
        cin>>Q[i].left>>Q[i].right;
        Q[i].ind=i;
    }
    sort(Q, Q+q, cmp);
    int curL= Q[0].left;
    int curR= Q[0].left;

    freq[ar[curL]]++;
    cntUnique++;

    for(int i=0;i<q;i++)
    {
        int a= Q[i].left;
        int b= Q[i].right;
        while(a< curL)
        {
            curL--;
            add(ar[curL]);
        }
        while(a>curL)
        {
            removee(ar[curL]);
            curL++;
        }
        while(curR<b)
        {
            curR++;
            add(ar[curR]);
        }
        while(b<curR)
        {
            removee(ar[curR]);
            curR--;
        }
        ans[Q[i].ind]=cntUnique;
    }
    for(int i=0;i<q;i++)cout<<ans[i]<<'\n';
    return 0;
}
