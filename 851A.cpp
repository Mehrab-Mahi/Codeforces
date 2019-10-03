#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main(){

    ll n,k,t;

    cin>>n>>k>>t;

    if(t<=k){
        cout<<t<<endl;
    }
    else if(t<=n){
        cout<<k<<endl;
    }
    else{
        int a = t-n;

        cout<<k-a<<endl;
    }

}
