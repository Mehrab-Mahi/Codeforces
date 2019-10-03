#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n];

    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    int c = 0,b=-1;

    for(int i = 0;i<n;i++){
        if(a[i]!=0 && a[i]!=b){
            c++;
            b = a[i];
        }
    }

    cout<<c<<endl;
}

