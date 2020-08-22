#include <bits/stdc++.h>

#define INP "solve"
#define OUT "solve"

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
#define N 300005

using namespace std;
int n;
int ar[N];
int STgcd[4*N];
int STmin[4*N];
void build(int id=1, int l=1, int r=n) {
    if (l == r) {
        STmin[id] = ar[l];
        STgcd[id] = ar[l];
        return ;
    }
    int mid = (l + r)/2;
    build(id *2, l, mid);
	build(id *2+1, mid + 1, r);

    STmin[id] = min(STmin[id*2], STmin[id *2+1]);
	STgcd[id] = __gcd(STgcd[id*2], STgcd[id *2+1]);
}
ii getPair(int u, int v,int id=1, int l=1, int r=n )
{
    if (v < l || r < u) {
        return ii(1000000000,0);
    }
    if (u <= l && r <= v) {
        return ii(STmin[id],STgcd[id]);
    }
    int mid = (l + r) /2;
    ii h = getPair(u, v,id *2, l, mid);
    ii k = getPair(u, v,id *2+1, mid + 1, r );
    return make_pair(min(k.fi, h.fi), __gcd(k.se, h.se));
}
int ans=0;
void readWrite(string s)
{
    freopen(INP ".inp","r",stdin);
    freopen(OUT ".out","w",stdout);
}
int main()
{
    IOS;
    cin>>n;
    FOR(i,1,n+1)cin>>ar[i];
    build(1,1,n);
    vector<int>v;
	int l = 0, r = n - 1;
	while(l < r)
	{
		int mid = (l + r + 1)/2;
		bool ok = false;
		for(int i = 1; i + mid <= n; i++)
		{
			ii temp = getPair(i, i + mid);
			if(temp.fi == temp.se)
			{
				ok = true;
				break;
			}
		}
		if(ok == true)
		{
			l = mid;
		}
		else
		{
			r = mid - 1;
		}
	}
    for(int i=1;i+l<=n;i++)
    {
        ii tmp=getPair(i,i+l);
        if(tmp.fi==tmp.se)v.push_back(i);
    }
    cout<<v.size()<<" "<<l<<endl;
    FOR(i,0,v.size())cout<<v[i]<< " ";
    return 0;
}
