#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll max(ll a , ll b)
{
    if(a>b)return a;
    return b;
}
/*int lenOfLongIncSubArr(vector<ll>arr, ll n,ll x)
{
    vector<ll>ind;
    bool check=true;
    ll Max = 1, len = 1;
    for (ll i=1; i<n; i++)
    {
        if(i==x)
        {
            arr[i]=arr[i-1];
            continue;
        }
        if (arr[i] > arr[i-1])
            len++;
        else
        {
            if (Max <= len)
            {
                Max = len;
            }
            len = 1;
        }
    }
    if (Max < len)
        Max = len;

    // required maximum length
    return Max;
}*/
int lenOfLongIncSubArr(vector<ll>arr, ll n)
{
    bool check=true;
    ll Max = 1, len = 1;
    for (ll i=1; i<n; i++)
    {
        if (arr[i] > arr[i-1])
            len++;
        else
        {
            if(check && arr[i]>arr[i-2])
            {
                check=false;
            }
            else
            {
                if (Max <= len)
                {
                    Max = len;
                    check=true;
                }
                len = 1;
            }
        }
    }
    if (Max < len)
        Max = len;

    // required maximum length
    return Max;
}
int main()
{
    ll n;
    cin>>n;
    vector<ll>arr;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        arr.push_back(x);
    }
    vector<pair<int,int>>res;
    for(int i=0;i<n;i++)
    {
        res.push_back(make_pair(1,0));
    }
    ll ans=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            if(res[i].first<res[i-1].first+1)
            {
                res[i].first=max(res[i].first,res[i-1].first+1);
                if(res[i-1].second==1)res[i].second=1;
            }

        }
        if(arr[i]>arr[i-2])
        {
            if(res[i-2].second==0)
            {
                if(res[i].first <res[i-2].first+1)
                {
                    res[i].second=1;
                    res[i].first=max(res[i].first,res[i-2].first+1);
                }
            }
        }
        ans=max(ans,res[i].first);
    }
    cout<<ans;
    return 0;
}
