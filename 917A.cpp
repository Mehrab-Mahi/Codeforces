#include<bits/stdc++.h>
#define long long ll;
using namespace std;

int main()
{
    int n,m=0,r;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=n-1;i>=0;i--){
        r = sqrt(a[i]);
        m=0;
        for(int j=r-2;j<=r+2;j++){
            if(j*j==a[i]){
                m=1;
                break;
            }
        }
        if(m==0){
            cout<<a[i]<<endl;
            break;
        }
    }
}
