#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,m=0,q=0;
    string s;

    cin>>n>>s;

    if(n==1){
        if(s[0]=='?')
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else if(n==2){
        if(s[0]!='?' && s[1]!='?' )
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    else{
    for(int i = 0;i<n-1;i++){
        if(s[i]==s[i+1] && s[i]!='?' && s[i+1]!='?'){
            m=1;
            break;
        }
    }
    int p = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='?')
            p = 1;
    }

    if(p==0)
        m=1;

    if(m==1)
        cout<<"No"<<endl;
    else{

        p = 0;

        for(int i=0;i<n-1;i++){
            if(s[i]=='?' && s[i+1]=='?')
            {
                p = 1;
                break;
            }
        }
        if(p==0){

            for(int i = 1;i<n-1;i++){
                if(s[i-1]=='?' && s[i+1]=='?' && (i-1==0 || i+1==n-1))
                {
                    //cout<<i-1<<" "<<i+1<<endl;
                    q = 1;
                    break;
                }
            }
        }
        if(p==0 && q==0){
        for(int i = 1;i<n-1;i++){
            if(s[i]=='?' && s[i-1]!='?' && s[i+1]!='?'){
                m=1;

                if(s[i-1]==s[i+1]){
                    m = 0;
                    break;
                }
            }
        }
    }


        if(m==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    }

}

