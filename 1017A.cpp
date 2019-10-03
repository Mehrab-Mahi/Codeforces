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

    int a[n],w,x,y,z,xx;

    vector<int>v[401];

    for(int i = 0;i<n;i++){
        cin>>w>>x>>y>>z;

        a[i] = w+x+y+z;

        if(i==0)
            xx = a[i];

        v[a[i]].pb(i+1);
    }

    sort(a,a+n);
    int c = 0;
    for(int i = n-1 ;i>=0 ;i--){
            c++;
        if(a[i]==xx){
            cout<<c<<endl;
            return 0;

        }
    }


}

