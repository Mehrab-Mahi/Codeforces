#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,c=0,m=0,k;
    string s;
    cin>>n>>s;

    for(int i = 0;i<n-1;i++){
        if(s[i]=='1' && s[i+1]=='1'){
            m = 1;
            break;
        }
    }

    if(m==0){
        if(n>2){
            for(int i = 0;i<n-2;i++){
                if(s[i+1]=='0' && s[i+2]=='0' && i+2==n-1){
                    m=1;
                }
                if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' ){
                    m = 1;
                    break;
                }
                if(s[i]=='0' && s[i+1]=='0' && i==0){
                    m = 1;
                }
            }

            if(!m){
                cout<<"Yes\n";
            }
            else
                cout<<"No\n";
        }
        else{
            if(n==1){
                if(s[0]=='0'){
                    cout<<"No\n";
                }
                else
                    cout<<"Yes\n";
            }
            else{
                if((s[0]=='0' && s[1]=='0') || (s[0]=='1' && s[1]=='1')){
                    cout<<"No\n";
                }
                else
                    cout<<"Yes\n";
            }
        }
    }
    else
        cout<<"No\n";
}
