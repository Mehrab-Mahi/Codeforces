#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    if(n%2==1){
        cout<<a[n/2]<<endl;
    }
    else if(n%2==0){
        int x = (n/2)-1;

        cout<<a[x]<<endl;
    }
}
