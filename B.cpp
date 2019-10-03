#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n,q,x,y,p;

    cin>>t;

    for(int z = 1; z<=t; z++){
        cin>>n>>q;

        ll a[n];

        for(int i = 0;i<n;i++){
            cin>>a[i];
        }

        for(int i = 0; i<q ; i++){
            cin>>p>>x>>y;

            if(p==1){
                for(int j = 0;j<n;j++){
                    if(a[j]<=x)
                        a[j] = a[j]-y;
                }
            }
            if(p==2){
                for(int j = 0;j<n;j++){
                    if(a[j]>=x)
                        a[j] = a[j]+y;
                }
            }
        }

        cout<<a[0];

        if(n>1){
            for(int i = 1;i<n;i++){
                cout<<" "<<a[i];
            }
        }

        cout<<endl;

        //cout<<x<<"       "<<t<<endl;
    }

}
