#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k,x=0;

    while(1){

    cin>>n>>k;

    for(ll i = n;i<=1000000000;i++){
        x = i;

        if(((x/k)*(x%k))==n){

                cout<<i<<endl;
                break;

        }
    }
    }
}
