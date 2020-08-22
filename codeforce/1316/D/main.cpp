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
int n;
int x[N][N],y[N][N];
char mat[N][N];
bool connect(int x1,int y1, int x2,int y2, char d1, char d2)
{
    if(x[x2][y2]==-1)
    {
        mat[x1][y1]=d1;
        if(mat[x2][y2]=='\0')mat[x2][y2]=d2;
        return 1;
    }
    else return 0;
}
void dfs(int curx, int cury , char d)
{
    if(mat[curx][cury]!='\0')return;
    mat[curx][cury]=d;
    if(x[curx+1][cury]==x[curx][cury] && y[curx+1][cury]==y[curx][cury])
        dfs(curx+1,cury,'U');
    if(x[curx-1][cury]==x[curx][cury] && y[curx-1][cury]==y[curx][cury])
        dfs(curx-1,cury,'D');
    if(x[curx][cury+1]==x[curx][cury] && y[curx][cury+1]==y[curx][cury])
        dfs(curx,cury+1,'L');
    if(x[curx][cury-1]==x[curx][cury] && y[curx][cury-1]==y[curx][cury])
        dfs(curx,cury-1,'R');
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin>>n;
    FOR(i,1,n+1)FOR(j,1,n+1)cin>>x[i][j]>>y[i][j];
    FOR(i,1,n+1)
    {
        FOR(j,1,n+1)
        {
            if(x[i][j]==i && y[i][j]==j)
                dfs(i,j,'X');
            else if(x[i][j]==-1)
            {
                bool visited=(mat[i][j]=='\0'?0:1);
                if(visited==0)visited=connect(i,j,i+1,j,'D','U');
                if(visited==0)visited=connect(i,j,i-1,j,'U','D');
                if(visited==0)visited=connect(i,j,i,j+1,'R','L');
                if(visited==0)visited=connect(i,j,i,j-1,'L','R');
                if(visited==0)
                {
                    cout<<"INVALID"<<endl;
                    return 0;
                }
            }
        }
    }
    FOR(i,1,n+1)
    {
        FOR(j,1,n+1)
        {
            if(mat[i][j]=='\0')
            {
                cout<<"INVALID";
                return 0;
            }
        }
    }
    cout<<"VALID"<<endl;
    FOR(i,1,n+1)FOR(j,1,n+1){cout<<mat[i][j]<<(j==n?"\n":"");}
    return 0;
}
