#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n , k ,s ;

    cin>>n>>k>>s;

    if(s==1 && k>1){
        cout<<"NO"<<endl;
    }
    else if((s/(n-1))<k)
        cout<<"NO\n";
    else if(s==1 && k==1){
        cout<<"YES"<<endl;

        cout<<2<<endl;
    }
    else{
        vector<ll>v;
        if(n>k){
            if(s>k){
               for(int i = 1; ; i++){

                v.pb(1+k);
               }
            }
        }
    }

}

