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
#define N 1005

using namespace std;
int ar[N][N];
int IT[4*N][4*N];
int n,q;

void update_y(int id_x, int L_x, int R_x, int id, int L, int R, int u, int v, int val)
{
    if(L==R)
    {
        if(L_x == R_x)
            IT[id_x][id] = val;
        else
            IT[id_x][id] = IT[id_x*2][id] + IT[id_x*2+1][id];
        return;
    }
    int mid = (L+R)/2;
    if(v <= mid)
        update_y(id_x, L_x, R_x, id*2, L, mid, u,v,val);
    else
        update_y(id_x, L_x, R_x, id*2+1, mid+1, R, u,v, val);
    IT[id_x][id] = IT[id_x][id*2] + IT[id_x][id*2+1];
}
void update_x(int id, int L, int R, int u, int v, int val)
{
    if(L!=R)
    {
        int mid=(L+R)/2;
        if(u <= mid)
            update_x(id*2, L, mid, u,v, val);
        else
            update_x(id*2+1, mid+1,R,u,v,val);
    }
    update_y(id,L,R,1,1,n,u,v,val);
}
void build_y(int id_x, int L_x, int R_x, int id_y, int L_y, int R_y)
{
    if(L_y == R_y)
    {
        if(L_x == R_x)
            IT[id_x][id_y] = ar[L_x][L_y];
        else
            IT[id_x][id_y] = IT[id_x*2][id_y] + IT[id_x*2+1][id_y];
        return;
    }
    int mid_y = (L_y+R_y)/2;
    build_y(id_x, L_x, R_x, id_y*2, L_y, mid_y);
    build_y(id_x, L_x, R_x, id_y*2+1, mid_y+1, R_y);
    IT[id_x][id_y] = IT[id_x][id_y*2] + IT[id_x][id_y*2+1];
}
void build_x(int id_x, int L_x, int R_x)
{
    if(L_x != R_x)
    {
        int mid_x=(L_x+R_x)/2;
        build_x(id_x*2, L_x, mid_x);
        build_x(id_x*2+1, mid_x+1, R_x);
    }
     build_y(id_x,L_x, R_x,1,1,n);
}
int get_y(int id_x, int id_y, int L_y, int R_y,  int u_y, int v_y)
{
    if(R_y< u_y || L_y> v_y) return 0;
    if(u_y <= L_y && R_y <= v_y)
    {
        return IT[id_x][id_y];
    }
    int mid_y = (L_y + R_y)/2;
    int left= get_y(id_x, id_y*2, L_y, mid_y, u_y, v_y);
    int right= get_y(id_x, id_y*2+1, mid_y+1, R_y, u_y, v_y);
    return left+right;
}
int get_x(int id_x, int L_x, int R_x, int u_x, int v_x, int u_y, int v_y)
{
    if(R_x < u_x || L_x> v_x) return 0;
    if(u_x <= L_x && R_x <= v_x)
    {
        return get_y(id_x,1,1,n,u_y,v_y);
    }
    int mid_x= (L_x+R_x)/2;
    int left= get_x(id_x*2, L_x, mid_x, u_x, v_x, u_y, v_y);
    int right= get_x(id_x*2+1, mid_x+1, R_x, u_x, v_x, u_y, v_y);
    return left+right;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        for(int j=1;j<=n;j++)
        {
            ar[i][j]=0;
            if(s[j-1]=='*')ar[i][j]=1;
        }
    }
    build_x(1,1,n);
    for(int i=0;i<q;i++)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int x,y;
            cin>>x>>y;
            int val = (ar[x][y]^1);
            ar[x][y]=val;
            //cout<<val<<endl;
            update_x(1,1,n,x,y,val);
        }
        else
        {
            int y1,x1,y2,x2;
            cin>>x1>>y1>>x2>>y2;
            cout<<get_x(1,1,n,x1,x2,y1,y2)<<'\n';
        }
    }
    return 0;
}
