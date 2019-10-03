#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    double a[n],b[n],c[n];

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];

        c[i] = a[i]/b[i];
    }

    sort(c,c+n);

    printf("%.8f\n",c[0]*m);
}
