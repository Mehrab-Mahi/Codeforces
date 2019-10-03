#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,h,m;

    cin>>n>>h>>m;

    int l,r,x,ans=0;

    int a[n+1];

    for(int i = 1;i<=n;i++)
        a[i]=-1;

    for(int i = 0;i<m;i++){
        cin>>l>>r>>x;

        for(int j = l;j<=r;j++){
            if(a[j]==-1)
                a[j]=x;
            else
                a[j] = min(a[j],x);
        }
    }


//    for(int i = 1;i<=n;i++)
//        cout<<" "<<a[i]<<endl;


    for(int i = 1;i<=n;i++){
        if(a[i]!=-1){
            ans+=(a[i]*a[i]);
        }
        else{
            //cout<<"nr "<<i<<endl;
            ans+=(h*h);
        }
    }

    cout<<ans<<endl;


}
