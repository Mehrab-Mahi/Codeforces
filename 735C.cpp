#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,s;

    cin>>n;

    for(int i = 0;i<=64;i++){
        s = pow(2,i);

        if(n<=s){
            cout<<s<<" "<<pow(2,i-1)<<endl;
            cout<<i<<endl;
            break;
        }
    }

}
