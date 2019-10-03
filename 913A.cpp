#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int m,n,a;

    cin>>n>>m;

    if(n>27)
        cout<<m<<endl;
    else{
        a = pow(2,n);
        cout<<m%a<<endl;
    }
}
