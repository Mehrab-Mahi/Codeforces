#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,k,x;

    cin>>n>>k;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    x = a[k-1];
    if(k==0){
        if(a[0]==1)
            cout<<-1<<endl;
        else
            cout<<1<<endl;
    }
    else if(k==n){
        cout<<x<<endl;
    }
    else{
        if(x==a[k]){
            cout<<-1<<endl;
        }
        else
            cout<<x<<endl;
    }

}
