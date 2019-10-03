#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    ll n;

    cin>>n;

    n = n+1;

    if(n==1)
        cout<<0<<endl;
    else if(n%2==0){
        cout<<n/2<<endl;
    }
    else
        cout<<n<<endl;
}
