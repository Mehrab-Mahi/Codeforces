#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll a,b,c=0;

    cin>>a>>b;

    ll n = (b-a)+1;

    n = n/2;

    cout<<"YES"<<endl;
    for(int i = 0;i<n;i++){
        cout<<a<<" "<<a+1<<endl;
        a = a+2;
    }

}
