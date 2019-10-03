#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,s=0;

    cin>>n;

    if(n>=100){
        s =s+ n/100;
        n = n%100;
    }

    if(n>=20){
        s = s + n/20;
        n = n%20;
    }

    if(n>=10){
        s = s + n/10;
        n = n%10;
    }

    if(n>=5){
        s = s + n/5;
        n = n%5;
    }

    if(n>=1){
        s = s + n/1;
        n = n%1;
    }

    cout<<s<<endl;
}
