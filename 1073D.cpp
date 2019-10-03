#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,t,s=0;

    cin>>n>>t;

    ll a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    while(1){
        ll ss = 0,sss=0;

        for(int i = 0;i<n;i++){
            if(t>=a[i]){
                t-=a[i];
                ss++;
                sss+=a[i];
            }
        }

        if(ss==0)
            break;

        s = s +ss+ (t/sss)*ss;

        t = t%sss;
    }

    cout<<s<<endl;

}
