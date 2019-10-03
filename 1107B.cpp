#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll q,n,k;

    cin>>q;

    while(q--){
        cin>>k>>n;

        cout<<((k-1)*9)+n<<endl;
    }

}
