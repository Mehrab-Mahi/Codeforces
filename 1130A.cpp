#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,d,m,z=0,nz=0;

    cin>>n;

    if(n%2==0)
        m = n/2;
    else
        m = (n/2)+1;

    double a[n],x;

    for(int i = 0; i<n ;i++)
        cin>>a[i];

    for(int i = 0;i<n;i++){
        x = a[i]/1.00;

        if(x>0.00)
            nz++;

        x = a[i]/-1.00;

        if(x>0.00)
            z++;
    }

    if(nz>=m)
        cout<<1<<endl;
    else if(z>=m)
        cout<<-1<<endl;
    else
        cout<<0<<endl;


}
