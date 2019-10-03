#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n , m,p,q=0;

    cin>>n>>m;

    p = (n-1)*m;

   long long int a[n],b[m],c[n],mx;

   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<m;i++)cin>>b[i];


   for(int i=0;i<n;i++){
        mx = -1e18;
    for(int j=0;j<m;j++){
        mx=max(mx,a[i]*b[j]);
    }
   c[i] = mx;
   }

   sort(c,c+n);

   cout<<c[n-2]<<endl;


}
