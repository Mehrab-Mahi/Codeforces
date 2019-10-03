#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    int64_t ans=0,tem;
    cin>>n>>p;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==1) b[i]=a[i];
        else b[i]=b[i-1]+a[i];
    }
    for(int i=1;i<n;i++)
    {
        tem=(b[i]%p) + ((b[n]-b[i])%p);
        if(tem>=ans) ans=tem;
    }
    cout<<ans<<endl;;

}
