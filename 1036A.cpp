#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,k;

    cin>>n>>k;

    if(n>=k)
        cout<<1<<endl;
    else{
        if(k%n==0)
            cout<<k/n<<endl;
        else
            cout<<(k/n)+1<<endl;
    }

}
