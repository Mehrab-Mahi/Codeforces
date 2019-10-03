#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
ll xx = 1;
ll factorize(ll n)
{
	ll count = 0,s=1;

	while (!(n % 2)) {
		n >>= 1;
		count++;
	}


	if (count){
		s=s*2;
		xx = xx * count;


	}
	for (long long i = 3; i <= sqrt(n); i += 2) {
		count = 0;
		while (n % i == 0) {
			count++;
			n = n / i;
		}
		if (count){
			s=s*i;

                xx =xx* count;

		}
	}

	if (n > 2){
		s = s*n;

		xx = xx*1;
	}


		return s;
}



int main()
{
    optimize;

    ll n,s=0,m,k=0,p=0;

    cin>>n;

    m = factorize(n);
    k = m;

    while(1){
        if(k*k>n){
           p = n/(k);
           break;
        }
        k = k*k;
    }

    cout<<m<<" "<<p<<endl;

}
