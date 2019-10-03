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

    for(int i = 0; i<s.size(); i++){
        if(s[i]!=t[i])
            cout<<1;
        else
            cout<<0;
    }
    cout<<endl;

}
