#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    ll n,k,m,d;

    cin>>n>>k>>m>>d;

    ll M = m,c,tot=0,p;

    if(n%k==0)
        c = n/k;
    else
        c = (n/k) + 1;

    if(c>m)
        c = m;

    tot = c;


    for(int i = 1;i<=d;i++){
        p = (c-d+1)*d;

        if(p>tot)
            tot = p;
    }


    if(M>tot)
        cout<<M<<endl;
    else
        cout<<tot<<endl;
}
