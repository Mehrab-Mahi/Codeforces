#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,pos;

    cin>>n;

    int a[1000];

    a[0] = 1;
    a[1] = 1;

    for(int i=2;i<1000;i++){
        a[i] = a[i-1] + a[i-2];

    }
    int p = 1;
    for(int i=1;i<=n;i++){
        if(a[p]==i){
            cout<<"O";
            p++;
        }
        else
            cout<<"o";
    }
    cout<<endl;





}
