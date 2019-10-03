#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int q,l1,r1,l2,r2,a,b;

    cin>>q;

    while(q--){
        cin>>l1>>r1>>l2>>r2;

        a = l1;

        if(l2==l1)
            b = r2;
        else
            b = l2;

        cout<<a<<" "<<b<<endl;
    }



}
