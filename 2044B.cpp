#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t;

    string s;

    cin>>t;

    while(t--){
        cin>>s;

        for(int i = s.size()-1 ; i >= 0 ; i--){
            if(s[i]=='p'){
                cout<<'q';
            }
            else if(s[i] == 'q'){
                cout<<'p';
            }
            else{
                cout<<'w';
            }
        }
        cout<<endl;
    }
}

