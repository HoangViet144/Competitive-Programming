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
long long maxx(long long a, long long b)
{
    return (a>b?a:b);
}
ll minn(ll a, ll b){return (a<b?a:b);}
int main()
{
    long long n,l,r,k;
    cin>>n>>l>>r>>k;
    long long ar[n];
    long long tmp1=0,tmp2=0,ind=1,ind2=0,cnt=0;
    FOR(i,0,n)cin>>ar[i];
    long long diff[n];
    FOR(i,0,n-1)
    {
        if(ar[i]<ar[i+1]){diff[i]=1;cnt=maxx(cnt,ind);ind=1;}
        else if(ar[i]==ar[i+1]){diff[i]=0;cnt=maxx(cnt,ind);ind=1;}
        else {diff[i]=-1;ind++;cnt=maxx(cnt,ind);}
        tmp2+=diff[i];

        if(tmp2<tmp1)
        {
            tmp1=tmp2;
            ind2=i+1;
        }
    }
   // cout<<tmp1<<endl;
    long long ans[n];
    ans[ind2]=l;
    for(ll i= ind2+1;i<n;i++)
    {
        if(diff[i-1]==1)
        {
            ans[i]=ans[i-1]+1;
            if(ans[i]>r)
            {
                cout<<-1;
                return 0;
            }
        }
        else if(diff[i-1]==0)ans[i]=ans[i-1];
        else
        {
           ans[i]=maxx(l,ans[i-1]-k);
        }
    }
    for(ll i=ind2-1;i>=0;--i)
    {
        if(diff[i]==0)ans[i]=ans[i+1];
        else if(diff[i]==-1)ans[i]=ans[i+1]+1;
        else
        {
            ans[i]=maxx(l,ans[i+1]-k);
        }
    }
    /*if(tmp1<0)ans[0]=l-tmp1;
    else ans[0]=l;
    FOR(i,1,n)
    {
        if(diff[i-1]==1)
        {
            ans[i]=ans[i-1]+1;
            if(ans[i]>r)
            {
                cout<<-1;
                return 0;
            }
        }
        else if(diff[i-1]==0)ans[i]=ans[i-1];
        else
        {
            if(tmp1>=0)ans[i]=maxx(l,ans[i-1]-k);
            else
            {
                if(i<=ind2+1 && i>=ind2+1-cnt)ans[i]=ans[i-1]-1;
                else ans[i]=maxx(l,ans[i-1]-k);
            }
        }
    }*/
    FOR(i,0,n)
    {
        if(ans[i]<l || ans[i]>r)
        {
            cout<<-1;
            return 0;
        }
    }
    FOR(i,0,n)cout<<ans[i]<<" ";
    return 0;
}
