#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,m,a,b;

    cin>>n>>m>>a>>b;

    if(n%m==0)
        cout<<0<<endl;
    else{
        ll s = n%m;

        ll dem = s,bl=m-s;
        //cout<<s<<" "<<dem<<" "<<bl<<endl;
        dem = dem*b;
        bl = bl*a;

        if(dem>bl)
            cout<<bl<<endl;
        else
            cout<<dem<<endl;
    }

}
