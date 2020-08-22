#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    long long ans=0;
    map<char,int>M;
    for(int i=0;i<k;i++)
    {
        char x;
        cin>>x;
        M[x]=1;
    }
    long long cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(M[s[i]]>0)cnt++;
        else
        {
            ans+=(cnt+1)*cnt/2;
            cnt=0;
        }
    }
    ans+=(cnt+1)*cnt/2;
    cout<<ans;
    return 0;
}
