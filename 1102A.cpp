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

    if(n==1){
        cout<<1<<endl;
    }
    else if(n==2){
        cout<<1<<endl;
    }
    else if(n==3){
        cout<<0<<endl;
    }
    else{
        if(n%2==0){
            if(n%4==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
        else{
            ll m = n-3;

            if(m%4==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
    }

}
