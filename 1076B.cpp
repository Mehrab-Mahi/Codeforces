#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;


ll factorize(ll n)
{
    int count = 0;

    while (!(n % 2)) {
        n >>= 1;
        count++;
    }

    if (count)
        return 2;

    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
            return i;
    }

    if (n > 2)
        return n;
}
int main()
{
    optimize;

    ll n,x,p=0;

    cin>>n;

    while(n>0){
        x = factorize(n);

        if(x==2){

        p = p + (n/x);

        n = n%x;
        }

        else{
            n = n - x;
            p++;
        }
    }

    cout<<p<<endl;


}
