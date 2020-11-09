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

using namespace std;
const ll N= 1e5+5;
//struct node
//{
//    bool isLeaf;
//    node* child[10];
//    node()
//    {
//        isLeaf=false;
//        for(int i=0;i<10;i++) child[i]=-1;
//    }
//};
int trie[N][10];
bool leaf[N];
string solve()
{
    int n;
    cin>>n;
    string ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar, ar+n);


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<10;j++) trie[i][j]=0;
        leaf[i]=false;
    }

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int root= 0;
        for(char c: ar[i])
        {
            int digit = c -'0';

            if(trie[root][digit]==0) trie[root][digit]=++cnt;
            root = trie[root][digit];
            if(leaf[root]) return "NO";
        }
        leaf[root]= true;
    }
    return "YES";
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}
