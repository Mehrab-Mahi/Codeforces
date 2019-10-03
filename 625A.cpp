#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a , b , c,n,s = 0, p =0 ,q =0,d;

    cin>>n>>a>>b>>c;

    if(a<=n)
        p = n/a;

    if(b<=n){

        d = b - c;

        q = (n - b)/d  ;

        s = q*d;

        s = n - s;

        if(s>=b){
            s = s - d;
            q++;
        }

        q = q + s/a;

    }


    if(q>p)
        cout<<q<<endl;
    else
        cout<<p<<endl;


}
