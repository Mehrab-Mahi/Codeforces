#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,m;
    map<int,int>mp;

    cin>>n>>m;

    ll a[n+2],b[n+2];

    b[0] = 0;
    a[0] = 0;

    for(int i = 1;i<=n;i++){
        cin>>a[i];
        mp[a[i]] =i;
        b[i] = b[i-1]+a[i];
    }

    for(int i = 0;i<m;i++){

    ll x;
    cin>>x;

    int s = upper_bound(b,b+n,x)-b;

    if(x-b[s-1]==0)
        cout<<s-1<<" "<<x-b[s-2]<<endl;
    else
        cout<<s<<" "<<x-b[s-1]<<endl;

    }
}
