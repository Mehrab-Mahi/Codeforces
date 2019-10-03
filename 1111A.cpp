#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;
    string s,t;
    cin>>s>>t;
    int d = 0;
    if(s.size()!=t.size())
        cout<<"No\n";
    else{
        for(int i = 0; i<s.size() ; i++){
            if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ){
                if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u'){
                    d = 0;
                }
                else{
                    d=1;
                    break;
                }
            }
            else{
                if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u'){
                    d=1;
                    break;
                }
                else{
                    d = 0;
                }
            }
        }

        if(d==0){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }

}
