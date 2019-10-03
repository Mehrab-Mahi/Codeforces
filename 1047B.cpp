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

    int a[n],b[n],x=0,y=0,pa=0,pb=0,c=0;

    for(int i = 0;i<n;i++){
       cin>>a[i]>>b[i];

       c = a[i]+b[i];

       if(c>x)
        x = c;
    }
    cout<<x<<endl;


}
