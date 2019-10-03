#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int q;

    cin>>q;

    ll n,a,b;

    while(q--){
        cin>>n>>a>>b;

        if(n%2==0){
            if(2*a<b){
                cout<<n*a<<endl;
            }
            else{
                cout<<(n/2)*b<<endl;
            }
        }
        else{
            if(2*a<b){
                cout<<n*a<<endl;
            }
            else{
                cout<<((n/2)*b)+a<<endl;
            }
        }
    }

}
