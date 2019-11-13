#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n],res[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        res[ar[i]]=i+1;
    }
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
    return 0;
}
