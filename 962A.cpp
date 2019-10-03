#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n;

    cin>>n;

    double s=0,a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];

        s= s+a[i];
    }
    double b = 0,d;
    for(int i = 0;i<n;i++){
        b = b + a[i];

        if(b>=s/2){
            d = i+1;
            break;
        }
    }
    cout<<d<<endl;
}



