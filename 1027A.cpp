#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n;
    string s;

    cin>>t;

    while(t--){
        cin>>n>>s;

        int k = n-1;
        int x = 0;
        int p=0,q=0;

        for(int i = 0;i<n/2;i++){
                p = s[i];
                q = s[k];
            int z = abs(p-q);
            if(p==q || z==2 ){
                x = 0;
            }
            else{
                //cout<<t<<"  "<<i<<"  "<<k<<endl;
                x = 1;
                break;
            }
            k--;
        }


        if(x==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        //cout<<"x   "<<x<<endl;
    }

}
