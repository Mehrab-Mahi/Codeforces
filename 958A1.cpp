#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,m=0;

    cin>>n;

    string s[n],t[n],r[n];

    for(int i = 0;i<n;i++){
        cin>>s[i];
        r[i] = s[i];
    }

    for(int i = 0;i<n;i++){
        cin>>t[i];
    }

    for(int i = 0;i<n;i++){

        if(s[i]!=t[i]){
            m = 1;
            break;
        }
    }

    int p;

    if(m==1){
        m = 0;

        p = n-1;

        for(int i = 0;i<n;i++){
            if(s[p]!=t[i]){
                m = 1;
                break;
            }
            p--;
        }

        if(m==1){
            m = 0;


            for(int i = 0;i<s[0].size();i++){
                for(int j = 0;j<n;j++){
                    if(s[j][i] != t[i][j] ){
                        m = 1;
                        break;
                    }
                }
                if(m==1)
                    break;
            }


            if(m==1){
                m =0;

                int l = s[0].size();
                p = 0;
                for(int i = l-1;i>=0;i--){
                for(int j = 0;j<n;j++){
                    if(s[j][i] != t[p][j] ){
                        m = 1;
                        break;
                    }
                }
                p++;
                if(m==1)
                    break;
            }

            if(m==1){


            }

            }
            else
                cout<<"Yes"<<endl;


        }
        else
            cout<<"Yes"<<endl;
    }
    else
        cout<<"Yes"<<endl;
}



