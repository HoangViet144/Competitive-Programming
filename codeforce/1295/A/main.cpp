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
//int ar[]={6,2,5,5,4,5,6,3,7,6};
char arr[]={'0','0','1','7','4','5','9','8'};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int num1=n/2-1;
        for(int i=1;i<=num1;i++)cout<<'1';
        cout<<arr[n-num1*2];
        cout<<endl;
    }
    return 0;
}
