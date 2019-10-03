#include<bits/stdc++.h>

using namespace std;

double pi = 2*acos(0.0);

int main()
{

    int t;
    cin>>t;

    double r1,r2,h,p,r,v;

    for(int i = 1;i<=t;i++){

    cin>>r1>>r2>>h>>p;

    r = r2+(((r1-r2)*p)/h);

    v = (1.00/3.00)*pi*p*((r*r)+(r*r2)+(r2*r2));

    printf("Case %d: %.8f\n",i,v);
    }
}
