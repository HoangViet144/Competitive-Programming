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
ll n,m,k;
vector<ii>ar;
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        ll tmp;
        cin>>tmp;
        ar.push_back({tmp,i+1});
    }
    sort(ar.begin(),ar.end());
    vector<ii> left,right;
    vector<int> ans;
    if(n==1)
    {
        if(k==m) cout<<1;
        else cout<<"impossible";
        return 0;
    }
    if(k%m!=0)
    {
        cout<<"impossible";
        return 0;
    }

    ll p= k/m;

    for(int i=n-p; i<n;i++)left.push_back(ar[i]);
    for(int i=0;i<n-p;i++) right.push_back(ar[i]);
    reverse(right.begin() , right.end());
    ll cur=0;
    ll ind=0, ind1=0;
    for(int i=0;i<n;i++)
    {
        if(i==0 || cur/ double(i)<= left[ind].fi)
        {
            if(ind >= left.size())break;
            cur+=m;
            ans.push_back(left[ind].se);
            //cout<<left[ind].fi<<" "<<left[i]
            ind++;
        }
        else
        {
            if(ind1 >=right.size())break;
            cur+=0;
            ans.push_back(right[ind1].se);
            ind1++;
        }
    }
    if(ans.size()!=n)cout<<"impossible";
    else
    {
        for(int i:ans)cout<<i << " ";
    }

    return 0;
}
