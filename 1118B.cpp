#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;

    ll a[n+1],s=0,o=0,e=0;

    for(int i = 1;i<=n;i++){
        cin>>a[i];

        if(i%2==1)
            o+=a[i];
        else
            e+=a[i];
    }

    ll oo=0,ee=0,c=0;

    for(int i = 1;i<=n;i++){
        if(i%2==1){
            if(i==1){
                if(o-a[i]==e)
                    c++;
            }
            else{
                if(oo+(e-ee)==(ee+(o-a[i]-oo)))
                    c++;
            }

         oo+=a[i];
        }
        else{
            if((oo+(e-a[i]-ee))==(ee+o-oo))
                c++;

            ee+=a[i];
        }


    }

    cout<<c<<endl;

}
