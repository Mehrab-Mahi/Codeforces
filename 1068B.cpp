

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int countDivisors(ll n)
{
    int cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {

            if (n / i == i)
                cnt++;

            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main()
{
    ll b;
    cin>>b;
    printf("%d",countDivisors(b));
    return 0;
}
