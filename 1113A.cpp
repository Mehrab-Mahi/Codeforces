#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,v,ans=0;

    cin>>n>>v;

    n--;

    if(n<v){
        cout<<n<<endl;
    }
    else if(n==v)
        cout<<v<<endl;
    else{
        ans = v;
        n++;
        int vol = v;
        for(int i = 2;i<=n; i++){

            vol--;
            if(vol<n-i){
                ans+=i;
                vol++;
            }
            else
                break;

        }

        cout<<ans<<endl;

    }

}
