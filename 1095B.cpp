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

    for(int i = 0 ; i<n ; i++)
        cin>>a[i];

    sort(a,a+n);

    int x,y;

    if(n==2)
        cout<<0<<endl;
    else{
        x = a[n-2]-a[0];
        y = a[n-1] - a[1];

        if(x<y)
            cout<<x<<endl;
        else
            cout<<y<<endl;
    }

}
