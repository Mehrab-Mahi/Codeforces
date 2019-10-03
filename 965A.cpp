#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int k,n,s,p,sheet=0,pack=0;

    cin>>k>>n>>s>>p;

    if(n%s==0)
        sheet = n/s;
    else
        sheet = (n/s)+1;

        sheet = k*sheet;

    if(sheet%p==0)
        pack = sheet/p;
    else
        pack = (sheet/p)+1;

    cout<<pack<<endl;
}
