#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,p=10000,s;

    cin>>n>>k;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=n-1;i>=0;i--){
        if(k%a[i]==0){
            s=k/a[i];

            if(s<p)
                p=s;
        }
    }

    cout<<p<<endl;
}
