#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,x,y;

    cin>>n>>x>>y;

    int a[n],p = 0;

    for(int i = 0; i<n ;i++){
        cin>>a[i];
    }


    if(x>y){
        cout<<n<<endl;
    }
    else{
    for(int i = 0;i<n;i++){
        if(a[i]<=x)
            p++;
    }

        if(p%2==0)
            cout<<p/2<<endl;
        else{
            cout<<(p+1)/2<<endl;
        }

    }



}
