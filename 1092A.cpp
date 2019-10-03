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
        int n,k;

        cin>>n>>k;

        int d = n/k,c=0;

        char a = 64+k;

        for(int i = k;i>0;i--){
                a = 96+i;
            for(int j = 0;j<d;j++){
                cout<<a;
                c++;
            }
        }

        if(c!=n){
            for(int i = 0;i<n-c;i++)
                cout<<'a';
        }

        cout<<endl;
    }

}
