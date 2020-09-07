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
int IT[4*N];
int ar[N];
void update(int id, int L ,int R, int u, int val)
{
    if(R<u || L>u)return;
    if(R==L)
    {
        IT[id]=val;
        return;
    }
    int mid =(L+R)/2;
    update(id*2, L, mid, u, val);
    update(id*2+1, mid+1, R, u, val);
    IT[id] = IT[id*2]+ IT[id*2+1];
}
int get(int id, int L, int R, int p)
{
	if(IT[id] < p) return 0;
	if(L==R) return L;
	int mid= (L+R)/2;
	if(IT[id*2] >= p) return get(id*2, L, mid, p);
	return get(id*2+1, mid+1, R, p- IT[id*2]);
}
void printTree(int id, int L, int R)
{
    printf("id: %d, L: %d, R: %d, sum: %d\n", id, L,R, IT[id]);
    if(L==R)return;
    int mid=(L+R)/2;
    printTree(id*2,L,mid);
    printTree(id*2+1, mid+1 , R);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        update(1,1,n,i,1);
    }
    //printTree(1,1,n);
	for(int i=0;i<n;i++)
	{
		int ind;
		cin>>ind;
		int pos=get(1,1,n,ind);
		cout<<ar[pos]<< " ";
		update(1,1,n,pos,0);
	}
    return 0;
}
