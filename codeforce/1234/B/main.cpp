#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long
#define N 1000000005

using namespace std;
//bool check[N];
map <int,int>check;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    FOR(i,0,n)
    {
        cin>>ar[i];
        check[ar[i]]=0;
    }
    queue<int>h;
    int i=0,ind=0;
    while(i<k && ind < n )
    {
        //if([ar[ind]]==false)
        if(check[ar[ind]]==0)
        {
            //check[ar[ind]]=true;
            check[ar[ind]]=1;
            h.push(ar[ind]);
            i++;
            ind++;
        }
        else ind++;
    }
    /*FOR(j,0,k)
    {
        cout<<h.front()<<" ";
        h.pop();
    }*/
    FOR(j,ind,n)
    {
        //cout<<"vitri thu "<<j<<" ";
        if(check[ar[j]]>0)continue;
        else
        {
            int tmp=h.front();
           // cout<<tmp<<endl;
            h.pop();
            check[tmp]=0;
            check[ar[j]]=1;
            h.push(ar[j]);
            //cout<<h.front()<<endl;
        }
    }
    cout<<h.size()<<endl;
    stack<int> ans;
    int x=h.size();
    FOR(j,0,x)
    {
        //cout<<h.front()<<" ";
        ans.push(h.front());
        h.pop();
    }
    x=ans.size();
    FOR(j,0,x)
    {
        cout<<ans.top()<<" ";
        ans.pop();
    }
    return 0;
}
