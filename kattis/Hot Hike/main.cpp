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
    int n;
    cin>>n;
    vector<int> tem(n);
    for(int i=0;i<n;i++)
        cin>>tem[i];
    int ind=-1;
    int temp = 100;
    for(int i =0 ;i+2 <n; i++)
    {
        int curTemp = max(tem[i], tem[i+2]);
        if(curTemp < temp)
        {
            ind =i;
            temp= curTemp;
        }
    }
    cout<<ind +1 << " "<<temp;
    return 0;
}
