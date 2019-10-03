#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,sum = 0,k=0;

    cin>>n;

    int m = 2*n -1;

    int a[m];

    for(int i = 0;i<m;i++){
        cin>>a[i];

        if(a[i]<0){
            a[i]=a[i]*-1;
            k++;
        }

         sum = sum + a[i];
    }

    sort(a,a+m);

    if(n%2==0){
        if(k%2==1)
            sum = sum - 2*a[0];
    }

    cout<<sum<<endl;
}

