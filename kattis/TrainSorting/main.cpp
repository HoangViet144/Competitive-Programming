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
int gt[11000];
int lt[11000];
int main()
{

    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    /// để thêm được a[i] vào đoàn tàu thì đếm xem đã thêm được bao nhiêu xe vào cuối tàu
    /// bao nhiêu xe vào đầu tàu
    /// các xe được thêm từ dưới lên đầu
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(j==n|| ar[j]>ar[i]) gt[i]= max(gt[i], gt[j]+1);
            if(j==n|| ar[j]<ar[i]) lt[i]= max(lt[i], lt[j]+1);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++) ans=max(gt[i]+lt[i]-1, ans);
    cout<<ans;
    return 0;
}
