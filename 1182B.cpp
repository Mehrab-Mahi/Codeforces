#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int h,w,m=0,n=0;

    cin>>h>>w;

    string s[h];

    for(int i = 0; i<h ;i++)
        cin>>s[i];

    if(h<3 || w<3){
        cout<<"NO"<<endl;
    }
    else{

        for(int i = 1;i<h-1;i++){
            for(int j = 1;j<w-1;j++){
                if(s[i][j]=='*' && s[i][j-1]=='*' && s[i][j+1]=='*' && s[i-1][j]=='*' && s[i+1][j]=='*'){

                    s[i][j]='.';
                    m=1;
                    for(int k = i+1;k<h;k++){
                        if(s[k][j]=='.')
                            break;
                        else
                            s[k][j]='.';
                    }

                    for(int k = i-1;k>=0;k--){
                        if(s[k][j]=='.')
                            break;
                        else
                            s[k][j]='.';
                    }

                    for(int k = j+1;k<w;k++){
                        if(s[i][k]=='.')
                            break;
                        else
                            s[i][k]='.';
                    }

                    for(int k = j-1;k>=0;k--){
                        if(s[i][k]=='.')
                            break;
                        else
                            s[i][k]='.';
                    }
                    n=1;
                    break;
                }
            }

            if(n==1)
                break;
        }
//        cout<<endl<<endl;
//        for(int i =0;i<h;i++)
//            cout<<s[i]<<endl;

        for(int i = 0;i<h;i++){
            for(int j = 0;j<w;j++){
                if(s[i][j]=='*'){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        if(m==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
