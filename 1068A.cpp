#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,m,k,l;

    cin>>n>>m>>k>>l;

    if(n<m){
        cout<<-1<<endl;
        return 0;
    }
    else{
        ll s = n-k;

        if(s<l){
            cout<<-1<<endl;
            return 0;
        }
        else{
           if(l%m==0)
               cout<<l/m<<endl;
        else{
            ll x = l/m;

            if(x==0)
                cout<<1<<endl;
            else
                cout<<(l/m)+1<<endl;
        }

        }
    }

}
