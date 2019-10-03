#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n;

    cin>>n;

    ll b[n/2];

    for(int i = 0;i<n/2;i++){
        cin>>b[i];
    }

    ll a[n],l = 0,u=n-1;

    memset(a,0,sizeof(a));

    a[l] = 0,l++;
    a[u] = b[0],u--;

    for(int i = 1;i<n/2;i++){
        ll d = b[i] - a[l-1];

        if(d>a[u+1]){
            a[u] = a[u+1];
            a[l] = b[i] - a[u];
            u--;
            l++;
        }
        else{
            a[l] = a[l-1];
            a[u] = d;
            l++,u--;
        }
    }

    for(int i = 0;i<n;i++){
        if(i!=n-1){
            cout<<a[i]<<" ";
        }
        else
            cout<<a[i]<<endl;
    }

}
