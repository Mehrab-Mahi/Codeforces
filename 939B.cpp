#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    ll n,k,a=1000000000000000000,b,m,x,y;

    cin>>n>>k;

    for(int i = 1;i<=k;i++){
        cin>>b;

        m = n%b;

        if(m<=a){
            a = m;
            x = i;
            y = n/b;
        }
    }

    cout<<x<<" "<<y<<endl;
}
