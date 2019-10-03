#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;

    cin>>s>>t;

    if(s.size()!=t.size())
        cout<<"NO"<<endl;
    else{
        int l = s.size(),p=0;
        l = l-1;
        for(int i = 0;i<s.size();i++){
            if(s[i]!=t[l]){
                cout<<"NO"<<endl;
                p = 1;
                break;
            }
            l--;
        }

        if(p==0)
            cout<<"YES"<<endl;
    }
}
