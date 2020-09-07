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
    int a,b;
	cin>>a>>b;
	vector<vector<int>> dp(a+1, vector<int>(b+1, 1e9));
	for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i==j)dp[i][j]=0;
            else
            {
                for(int k=1;k<i;k++)
                    dp[i][j]= min(dp[i][j], dp[k][j]+dp[i-k][j]+1);
                for(int k=1;k<j;k++)
                    dp[i][j] = min(dp[i][j], dp[i][k]+dp[i][j-k]+1);
            }
        }
    }
	cout<<dp[a][b];
    return 0;
}
