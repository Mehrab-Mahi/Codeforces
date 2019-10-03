#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    ll n,q,c,arrow=0,s=0;

    cin>>n>>q;

    ll a[n];

    cin>>a[0];

    if(n>1){
        for(int i = 1;i<n;i++){
            cin>>a[i];

            a[i] = a[i] + a[i-1];
        }
    }

    while(q--){
        cin>>c;

        arrow = arrow + c;

        s = upper_bound(a,a+n,arrow)-a;

        if(s==n){
            s = 0;
            arrow = 0;
        }

        cout<<n-s<<endl;
    }


}
