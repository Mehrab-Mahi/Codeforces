#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    ll s = 0;

    cin>>n;

    for(int i = 1;i<=n;i++){
        s = s+i;
    }
    int m = 0;
    if(n<=2)
        cout<<"No\n";
    else{
        for(int i = 2;i<=s/2;i++){
            if(s%i==0){
                m = i;
                break;
            }
        }

        if(m==0)
            cout<<"No\n";
        else{
            cout<<"Yes\n";
            cout<<1<<" "<<m<<endl;
            cout<<n-1;

            for(int i = 1;i<=n;i++){
                if(i!=m)
                    cout<<" "<<i;
            }
            cout<<endl;
        }
    }
}
