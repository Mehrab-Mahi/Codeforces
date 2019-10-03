#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    long long int s=0;
    int m = n-1,k;
    for(int i = 0;i<n/2;i++){
        k = a[i]+a[m];
        s=s+(k*k);
        m--;
    }

    cout<<s<<endl;
}
