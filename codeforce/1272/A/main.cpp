#include<bits/stdc++.h>

using namespace std;
long long MIN(long long a, long long b)
{
    if(a<b)return a;
    return b;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long dis=abs(a-b)+abs(a-c)+abs(b-c);
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                for(int k=-1;k<=1;k++)
                {
                    dis=MIN(dis,abs(a+i - b-j)+abs(a+i-c-k)+abs(b+j-c-k));
                }
            }
        }
        cout<<dis<<endl;
    }
    return 0;
}
