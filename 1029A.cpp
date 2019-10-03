#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k;

    string s,t;

    cin>>n>>k>>s;

    t = s;

    reverse(t.begin(),t.end());

    if(t==s){
        if(t.size()==1){
            for(int i = 1;i<=k;i++)
                cout<<s;

            cout<<endl;
        }
        else{
            cout<<s;

            if(k>1){
                for(int i = 2;i<=k;i++){
                    for(int j = 1;j<s.size();j++){
                        cout<<s[j];
                    }
                }
            }
            cout<<endl;
        }
    }
    else{
        for(int i = 1;i<=k;i++)
            cout<<s;

        cout<<endl;
    }

}

