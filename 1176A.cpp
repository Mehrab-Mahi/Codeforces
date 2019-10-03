#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll q,n;

    cin>>q;

    while(q--){

        ll ans = 0;

        cin>>n;

        while(n>1){

            if(n%2==0){
                n = n/2;
                ans++;
            }
            else if(n%3==0){
                n = (2*n)/3;
                ans++;
            }
            else if(n%5==0){
                n = (4*n)/5;
                ans++;
            }
            else{
                ans = -1;
                break;
            }
            cout<<n<<endl;


            if(n==1)
                break;

        }

        cout<<ans<<endl;
    }

}
