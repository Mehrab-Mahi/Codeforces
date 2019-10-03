#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int b,g,n,x=0,y=0,xx=0,yy=0,ans=0;

    cin>>b>>g>>n;

    xx = 0;yy=n;

    for(int i = 0;i<=n;i++){
        if(xx+yy==n && xx<=b && yy<=g)
            ans++;

        xx++;
        yy--;
    }

    cout<<ans<<endl;

}
