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
class matrix
{
    public:
    ll n;
    ll **ar;
    matrix(ll n,ll val)
    {
        this->n=n;
        ar=new ll*[n];
        for(ll i=0;i<n;i++)ar[i]=new ll[n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                ar[i][j]=val;
            }
        }
    }
    ll get(ll i, ll j)
    {
        return ar[i][j];
    }
    void sett(ll i ,ll j, ll val)
    {
        ar[i][j]=val;
    }
    matrix operator*(matrix A)
    {
        matrix tmpp(this->n,0);
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                ll tmp=0;
                for(ll k=0;k<n;k++)
                {
                    tmp+=ar[i][k]*A.get(k,j);
                }
                tmpp.sett(i,j,tmp);
            }
        }
        return tmpp;
    }
};
matrix quickFibo(ll n)
{
    if(n<=1)
    {
        matrix tmp(2,1);
        tmp.sett(1,1,0);
        return tmp;
    }
    if(n&1)
    {
        matrix tmp(2,1);
        tmp.sett(1,1,0);
        matrix tmp1=quickFibo(n/2);
        return tmp*tmp1*tmp1;
    }
    else
    {
        matrix tmp1=quickFibo(n/2);
        return tmp1*tmp1;
    }
}
int main()
{
   // matrix ans=quickFibo(1);
   // cout<<ans.get(0,0)<<" "<<ans.get(0,1)<<" " <<ans.get(1,0)<<" "<<ans.get(1,1);
    ll n;
    cin>>n;
    matrix ans=quickFibo(n);
    cout<<ans.get(0,1)<<endl;
    //cout<<ans.get(0,0)<<" "<<ans.get(0,1)<<endl<<ans.get(1,0)<<" "<<ans.get(1,1);
    return 0;
}
//1 1 2 3 5 8
