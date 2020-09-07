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
vector<string> board (8);
bool check(vector<string>&board, int &row, int &col)
{
    for (int i=0 ;i<row;i++)
        if (board[i][col]=='#')return false;
    for (int i=0;i<row;i++)
        if (col- (row-i)>=0 && board[i][col- (row-i)]=='#') return false;
    for (int i=0;i<row;i++)
        if (col+ (row-i) <8 && board[i][col+ (row-i)]=='#') return false;
    return true;
}
void place (vector<string> board, int row, int & cnt)
{
	if (row==8)
	{
		cnt++;
		return;
	}
	for(int i=0;i<8;i++)
	{
		if(board[row][i]=='.' && check(board, row,i))
		{
			board[row][i]='#';
			place(board,row+1,cnt);
			board[row][i]='*';
		}
	}
}
int main()
{
    FOR(i,0,8) cin>>board[i];
    int ans=0;
    place(board,0,ans);
    cout<<ans;
    return 0;
}
