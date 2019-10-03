#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;
    ll n;

    cin>>n;

    if(n==1)
        cout<<2<<endl;
    else if(n==2)
        cout<<3<<endl;
    else if(n==3)
        cout<<4<<endl;
    else if(n==4)
        cout<<4<<endl;
    else if(n==5 || n==6){
        cout<<5<<endl;

    }
    else if(n>=7 && n<=9){
        cout<<6<<endl;
    }
    else if(n>=10 && n<=12){
        cout<<7<<endl;
    }
    else{
            ll m = 0,x = 7,y = 4;
        for(int i = 12; ; ){

            i+=y;
            x++;

            if(i>=n){
                cout<<x<<endl;
                return 0;
            }

            i+=y;
            x++;

            if(i>=n){
                cout<<x<<endl;
                return 0;
            }

            y++;

        }
    }

}
