#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t;

    cin>>t;

    while(t--){
        int n,c=0;

        cin>>n;

        if(n%2==1){
            c++;
            n = n - 3;

            c = c + (n/2);

            cout<<c<<endl;
        }
        else{
            cout<<n/2<<endl;
        }
    }

}
