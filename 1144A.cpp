#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;

    string s;

    while(n--){
        cin>>s;

        sort(s.begin(),s.end());

        if(s.size()==1)
            cout<<"Yes\n";
        else{
                int m= 0;

            for(int i = 1;i<s.size();i++){
                if(s[i]==s[i-1] || s[i-1]+1!=s[i]){
                    m=1;
                    break;
                }
            }

            if(m==0)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }

}
