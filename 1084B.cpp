#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,s,ss=0,v,l=1000000007;

    cin>>n>>s;

    int a[n];

    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        ss += a[i];

        if(a[i]<l)
            l = a[i];
    }

    if(ss<s){
        cout<<-1<<endl;
        return 0;
    }

    v = 0;

    for(int i = 0;i<n;i++){
        v=v + a[i] - l;
    }

    if(v>=s){
        cout<<l<<endl;
        return 0;
    }
    else{
        for(int i = l;i>0;i--){
            v = v + n;

            if(v>=s){
                cout<<i-1<<endl;
                break;
            }
        }
    }


}
