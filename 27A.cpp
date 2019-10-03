#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = i+1;
    }
    int p = 0;

    sort(a,a+n);

    for(int i = 0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<b[i]<<endl;
            p = 1;
            break;
        }
    }

    if(p ==0)
        cout<<a[n-1]+1<<endl;

}
