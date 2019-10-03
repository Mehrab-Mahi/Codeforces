#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,m,s,t,a;

    cin>>n>>m;

    cin>>s;

    t = s/m;

    cout<<t;

    if(n>1){
        for(int i = 1 ; i<n ; i++){
            cin>>a;

            s = s + a;

            cout<<" "<<(s/m)-t;
            t = s/m;
        }
    }
    cout<<endl;
}

