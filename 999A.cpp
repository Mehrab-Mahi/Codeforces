#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c=0,n,k;

    cin>>n>>k;

    int a[n];

    for(int i = 0 ; i<n ;i++)
        cin>>a[i];

    for(int i = 0;i<n;i++){
        if(a[i]>k)
            break;
        else{
            c++;
            a[i] = 0;
        }
    }

    for(int i=n-1; i>=0;i--){
        if(a[i]>k || a[i]==0)
            break;
        else{
            c++;
            a[i] = 0;
        }
    }

    cout<<c<<endl;
}
