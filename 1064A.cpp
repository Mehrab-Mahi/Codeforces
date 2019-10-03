#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int a[3];

    cin>>a[0]>>a[1]>>a[2];

    sort(a,a+3);

    if(a[2]<(a[0]+a[1]))
        cout<<0<<endl;
    else
        cout<<a[2]-(a[0]+a[1])+1<<endl;

}
