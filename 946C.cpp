#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{

    string s,t;

    int p = 0,m=0,j,d=0;

    cin>>s;

    if(s.size()<26)
        cout<<-1<<endl;
    else{
    for(int i = 0;i<s.size();i++){
        d = 0;
        p = 0;
        if(s[i]=='a'){
                t = 'a';
                p++;
            for( j = i+1;j<s.size();j++){
                if(t[0]+1==s[j]){
                    p++;
                    t = s[j];
                    if(p==26)
                    {
                        //cout<<"abcdefghijklmnopqrstuvwxyz"<<endl;
                        m =1;
                        break;
                    }
                }
                else if(t[0]>=s[j]){
                    t = t[0]+1;
                    s[j] = t[0];

                    p++;

                    if(p==26){
                        //cout<<"abcdefghijklmnopqrstuvwxyz"<<endl;
                        m=1;
                        break;
                    }
                }

            }

            if(m==1)
                break;
        }

        if(j==s.size()-1)
            break;

    }
    if(m==0)
        cout<<-1<<endl;
    else
        cout<<s<<endl;
}
}
