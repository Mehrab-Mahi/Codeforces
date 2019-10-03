#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;

    int a[n];

    for(int i=0 ; i<n; i++) cin>>a[i];

    sort(a,a+n);

    if(a[n-1]>1)
        a[n-1]=1;
    else
        a[n-1]=2;

    sort(a,a+n);

    cout<<a[0];

    if(n>1){
        for(int i = 1;i<n ;i++)
            cout<<" "<<a[i];
    }

    cout<<endl;

}
