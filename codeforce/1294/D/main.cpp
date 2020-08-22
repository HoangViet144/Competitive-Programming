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
bool arr[1000000005];
int main()
{
    int q,x;
    cin>>q>>x;
    vector<ll>ar;
    ll cur_ans=0;
    FOR(i,0,q)
    {
        if(ar.size()==0)
        {
            ll tmp;
            cin>>tmp;
            ar.push_back(tmp);
            if(tmp)cout<<0<<endl;
            else cout<<1<<endl;
            arr[tmp]=true;
            continue;
        }
        auto t=lower_bound(ar.begin(),ar.end(),x);
        //cout<<"Fdsa"<<*t<<endl;
        if(t!=ar.end())(*t)-=x;
        ll tmp;
        cin>>tmp;
        ar.push_back(tmp);
        arr[tmp]=true;
        auto m=lower_bound(ar.begin(),ar.end(),cur_ans);
        if((*m)!=0 && cur_ans==0)cout<<0<<endl;
        else
        {
            ll ind=0;
            while(arr[ind])ind++;
            cur_ans=ind;
            cout<<cur_ans<<endl;
        }
        if(ar.size()>0 && t!=ar.end())(*t)+=x;
    }
    return 0;
}
