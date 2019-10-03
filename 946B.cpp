#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll a,b;

    cin>>a>>b;

    while(1){
        if(a==0 || b==0)
            break;

        if(a>=2*b){
            a = a%(2*b);
        }
        else if(b>=2*a){
            b = b%(2*a);
        }
        else
            break;
    }

    cout<<a<<" "<<b<<endl;
}
