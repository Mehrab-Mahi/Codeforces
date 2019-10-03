#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,m,k;

    cin>>n>>m>>k;

    int a[n];

    for(int i = 0; i<n;i++){
        cin>>a[i];
    }

    ll s = 0;

    sort(a,a+n);
    int b = a[n-1];
    if(k>=m){
        cout<<k*b<<endl;
    }
    else if(k==1){
        if(m%2==0){
            s+=(m/2)*b;
            s+=(m/2)*a[n-2];
            cout<<s<<endl;
        }
        else{
            s+=((m/2)+1)*b;
            s+=((m/2))*a[n-2];
            cout<<s<<endl;
        }
    }
    else{
        k++;

        ll x = (k-1)*b;
        x+=a[n-2];

        s+=(m/k)*x;
        s+=(m%k)*b;

        cout<<s<<endl;
    }

}
