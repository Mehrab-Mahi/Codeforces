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

    int m = 0;

    for(int i = 0; i<s.size() ; i++){
        if(s[i]!='a' && s[i]!='e'  && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='n'){
            if(i+1<s.size() && (s[i+1]=='a' || s[i+1]=='e'  || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')){
                m = 0;
            }
            else{
                m = 1;
                break;
            }
        }
    }

    if(m==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";

}

