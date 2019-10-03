#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,m,a,b;

    ll  s = 0;

    cin>>n>>m;

    vector<ll>v;

    for(int i = 0;i<n;i++){
        cin>>a>>b;

        v.pb(a-b);
        s = s + a;
    }

    sort(v.begin(),v.end());

    int k = 0,c =0;

    if(s<=m){
        cout<<0<<endl;
    }
    else{

    for(int i = n-1 ; i>=0 ;i--){
        c++;
        s = s - v[i];

        if(s<=m){
            k = 1;
            break;
        }
    }

    if(k==0){
        cout<<-1<<endl;
    }
    else{
        cout<<c<<endl;
    }
}

}

