#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t;

    cin>>t;

    ll s,a,b,c,m,n,x;

    while(t--){
        cin>>s>>a>>b>>c;

        m = a*c;
        //cout<<m<<endl;

        n = (s/m);
        m = m*n;

        m = s-m;

        x = (n*a)+(n*b);

        x = x+(m/c);

        cout<<x<<endl;
    }

}
