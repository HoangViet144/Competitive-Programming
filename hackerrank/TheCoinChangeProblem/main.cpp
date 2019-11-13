#include <iostream>

using namespace std;
long getWays(long n, int c_count, long* c) {
    int value[n+1];
    for(int i=0;i<=n;i++)value[i]=0;
    value[0]=1;
    for(int i=0;i<c_count;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(c[i]<=j)value[j]+=value[j-c[i]];
        }
    }
    return value[n+1];
}
int main()
{

    return 0;
}
