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

    int l = s.size();
    vector<char>v;
    if(l%2==1){
        int a = 0,b = l-1;

        for(int i = 0;i<l/2;i++){
            v.pb(s[a]);
            v.pb(s[b]);
            a++;
            b--;
        }

        //a++;

        v.pb(s[a]);

    }
    else{
        v.pb(s[l-1]);
        int b = l-2,a = 0;

        for(int i = 0;i<(l-1)/2;i++){
            v.pb(s[a]);
            v.pb(s[b]);
            a++;
            b--;
        }

        //a++;

        v.pb(s[a]);
    }

    for(int i = v.size()-1;i>=0;i--)
        cout<<v[i];

    cout<<endl;

}
