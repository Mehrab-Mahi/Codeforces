#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;

    cin>>s;

    if(s.size()<3){
        cout<<"No\n";
    }
    else{
        for(int i = 1;i<s.size()-1;i++){
            if(s[i]!='.' && s[i-1]!='.' && s[i+1]!='.' && s[i-1]!=s[i] && s[i]!=s[i+1] && s[i-1]!=s[i+1]){
                cout<<"Yes\n";
                return 0;
            }
        }

        cout<<"No\n";
    }

}
