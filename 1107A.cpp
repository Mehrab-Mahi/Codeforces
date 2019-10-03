#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int q,n;

    cin>>q;

    string s;

    while(q--){
        cin>>n>>s;

        if(s.size()==2){
            if(s[0]>=s[1]){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n"<<2<<endl<<s[0]<<" "<<s[1]<<endl;
            }
        }
        else{
            cout<<"YES\n";

            cout<<2<<endl<<s[0]<<" ";

            s.erase(s.begin()+0);

            cout<<s<<endl;
        }
    }

}
