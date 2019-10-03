#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string t,s[5];

    cin>>t>>s[0]>>s[1]>>s[2]>>s[3]>>s[4];


    for(int i = 0;i<5;i++){
        if(t[0]==s[i][0] || t[1]==s[i][1]){
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO\n";

}
