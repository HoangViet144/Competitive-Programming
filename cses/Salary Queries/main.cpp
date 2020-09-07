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
#define N 2000005

using namespace std;
int IT[16*N];
vector<int> compress;
vector<int> freq(4*N,0);
struct query
{
    char type;
    int a,b;
};
query Q[N];




int ar[N];
void build(int id, int L, int R)
{
    if(L==R)
    {
        IT[id]=freq[L];
        return;
    }
    int mid=(L+R)/2;
    build(id*2, L,mid);
    build(id*2+1, mid+1,R);

    IT[id] = IT[id*2] + IT[id*2+1];
}
void update(int id, int L, int R, int u, int val)
{
    if(R<u || L>u)return;
    if(R==L)
    {
        IT[id]= val;
        return;
    }
    int mid= (L+R)/2;
    update(id*2, L, mid, u, val);
    update(id*2+1, mid+1, R,u,val);
    IT[id] = IT[id*2] + IT[id*2+1];
}

int get(int id, int L, int R, int u, int v)
{
    if(R<u || L>v)return 0;
    if(u<= L && R<=v)
    {
        return IT[id];
    }
    int mid= (L+R)/2;
    int left= get(id*2, L, mid, u,v);
    int right = get(id*2+1, mid+1, R, u,v);
    return left+right;
}
int main()
{
    //freopen("test_input.txt","r",stdin);
    //freopen("test_output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin >>ar[i];
        compress.push_back(ar[i]);
    }
    for(int i=0;i<q;i++)
    {
        cin>>Q[i].type>>Q[i].a>>Q[i].b;
        if(Q[i].type=='?')
        {
            compress.push_back(Q[i].a);
            compress.push_back(Q[i].b);
        }
        else compress.push_back(Q[i].b);
    }
    sort (compress.begin(), compress.end());
    compress.resize(unique(compress.begin(), compress.end()) - compress.begin());
    int cnt= compress.size();
    for(int i=1;i<=n;i++)
    {
        ar[i]= lower_bound(compress.begin(), compress.end(), ar[i]) - compress.begin()+1;
    }
    for(int i=0;i<q;i++)
    {
        if(Q[i].type=='?')
        {
            Q[i].a = lower_bound(compress.begin(), compress.end(), Q[i].a) - compress.begin()+1;
            Q[i].b = lower_bound(compress.begin(), compress.end(), Q[i].b) - compress.begin()+1;
        }
        else Q[i].b = lower_bound(compress.begin(), compress.end(), Q[i].b) - compress.begin()+1;
    }

    for(int i=1;i<=n;i++)
    {
        int ind = ar[i];
        //cout<<ind<<" ";
        freq[ind]++;
    }
    //cout<<endl<<cnt<<endl;

    build(1,1,cnt);

    for(int i=0;i<q;i++)
    {
        if(Q[i].type=='!')
        {
            int ind= Q[i].b;
            freq[ind]++;
            int indOld = ar[Q[i].a];
            freq[indOld] --;
            ar[Q[i].a]= Q[i].b;
            update(1,1,cnt,ind, freq[ind]);
            update(1,1,cnt,indOld, freq[indOld]);
        }
        else
        {
            int ind1= Q[i].a;
            int ind2= Q[i].b;
            cout<<get(1,1,cnt,ind1,ind2)<<'\n';
        }
    }
    return 0;
}
