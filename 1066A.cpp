#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int countDivisibles(int A, int B, int M)
{

    if (A % M == 0)
        return (B / M) - (A / M) + 1;


    return (B / M) - (A / M);
}

int main()
{
    optimize;

    ll t,L,v,l,r;

    cin>>t;

    while(t--){
        cin>>L>>v>>l>>r;

         ll x =  countDivisibles(l, r, v);

         ll y = L/v;

         cout<<y-x<<endl;
    }



}
