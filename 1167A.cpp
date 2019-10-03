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

        if(s.size()<11){
            cout<<"NO"<<endl;
        }
        else{
            int pos = -1;

            for(int i = 0;i<n;i++){
                if(s[i]=='8'){
                    pos = i;
                    break;
                }
            }

            if(pos==-1){
                cout<<"NO"<<endl;
            }
            else{
                if(n-pos>=11){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }


}
