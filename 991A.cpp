#include<bits/stdc++.h>

using namespace std;

int main(){

    int a,b,c,n,aa,bb;

    cin>>a>>b>>c>>n;

    if(c>a || c>b){
        cout<<-1<<endl;
        return 0;
    }

    aa = a - c;
    bb = b - c;

    int t = aa+bb+c;

    if(t==n || t>n){
        cout<<-1<<endl;
        return 0;
    }

    cout<<n-t<<endl;

}
