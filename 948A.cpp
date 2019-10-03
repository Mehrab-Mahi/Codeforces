#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    string s[n];

    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    int m = 0;
    for(int i =0;i<n;i++){
        for(int j = 0;j<k-1;j++){
            if(s[i][j]=='S' && s[i][j+1]=='W'){
                cout<<"No"<<endl;
                m = 1;
                break;
            }
             if(s[i][j]=='W' && s[i][j+1]=='S'){
                cout<<"No"<<endl;
                m = 1;
                break;
            }
        }
        if(m==1)
            break;
    }
    if(m==0){
    for(int i = 0;i<k;i++){
        for(int j = 0;j<n-1;j++){
            if(s[j][i]=='S' && s[j+1][i]=='W'){
                m = 1;
                cout<<"No"<<endl;
                break;
            }
             if(s[j][i]=='W' && s[j+1][i]=='S'){
                m = 1;
                cout<<"No"<<endl;
                break;
            }
        }
        if(m==1)
            break;
    }
    }

    if(m==0){
            cout<<"Yes"<<endl;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<k;j++){
                if(s[i][j]=='.')
                    s[i][j] = 'D';
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }

}
