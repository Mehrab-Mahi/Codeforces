#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k;

    cin>>n>>k;

    int a[n],b[n];

    for(int i = 0; i<n ; i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b,b+n);

    if(k==1){
        cout<<b[0]<<endl;
    }
    else if(k>2){
        cout<<b[n-1]<<endl;
    }
    else{
        if(a[0]>a[n-1])
            cout<<a[0]<<endl;
        else
            cout<<a[n-1]<<endl;
    }

}
