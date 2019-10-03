#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    ll n,m,k,a,b,c=1,d=0;

    cin>>n>>m>>k;

    if(k<=n-1){
        cout<<k+1<<" "<<1<<endl;
    }
    else if(k<=(n+m-2)){
        a = k - (n-1);
        cout<<n<<" "<<a+1<<endl;
    }
    else{
        a = k - (n-1);

        b = a/(m-1);
        c = a%(m-1);

        if(b%2==0){
            if(c==0){
                cout<<n-b+1<<" "<<2<<endl;
            }
            else{
                cout<<n-b<<" "<<c+1<<endl;
            }
        }
        else{
            if(c==0){
                cout<<n-b+1<<" "<<m<<endl;
            }
            else{
                cout<<n-b<<" "<<m-c+1<<endl;
            }
        }
    }
}
