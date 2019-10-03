#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    string s[n];

    for(int i = 0; i<n;i++)
        cin>>s[i];

    int c = 0;
    if(n<3){
        cout<<0<<endl;
    }
    else{
        for(int i = 1;i<n-1;i++){
            for(int j = 1;j<n-1;j++){
                if(s[i][j]=='X' && s[i-1][j-1]=='X' && s[i-1][j+1]=='X' && s[i+1][j-1]==s[i+1][j+1] && s[i+1][j-1]=='X'){
                    c++;
                    //cout<<"("<<i+1<<","<<j+1<<")"<<endl;
                }
            }
        }

        cout<<c<<endl;
    }
}
