#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,a,b,c,d,t,p,q;
    cin>>n;

    for(int i = 1;i<=n;i++){
        cin>>t;

        if(t==1)
            a= i;

        if(t==n)
            b = i;
    }

     c = n-a;
     d = n - b;
     p = abs(1-a);
     q = abs(1-b);

     if(c<d)
        c = d;
     if(p<q)
        p = q;

    if(c>p)
        cout<<c<<endl;
    else
        cout<<p<<endl;


}

