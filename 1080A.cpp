#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k,r=0,g=0,b=0;

    cin>>n>>k;

    r = n*2;

    if(r%k==0)
        r = r/k;
    else
        r = r/k + 1;

    g = n*5;

    if(g%k==0)
        g = g / k;
    else
        g = g/k + 1;

    b = n*8;

    if(b%k==0)
        b = b / k;
    else
        b = b/k + 1;

    cout<<r+g+b<<endl;

}
