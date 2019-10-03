#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t;

    cin>>t;
    string s;

    while(t--){
        cin>>s;

        int up=0,l=0,d=0;

        for(int i = 0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90)
                up++;
            if(s[i]>=97 && s[i]<=122)
                l++;
            if(s[i]>=48 && s[i]<=57)
                d++;
        }

        if(d>1 && up==0 && l==0)
        {
                s[0] = 'A';
                s[1] = 'a';
                cout<<s<<endl;
        }
        else if(up>1 && l==0 && d==0){
                s[0]='1';
                s[1]='a';
                cout<<s<<endl;

        }
        else if(l>1 && up==0 && d==0){
            s[0] = 'A';
            s[1] = '1';
            cout<<s<<endl;
        }
        else if(l>=1 && up>=1 && d>=1)
            cout<<s<<endl;
        else if(up==0){
                if(l<d){
                    for(int i = 0;i<s.size();i++){
                        if(s[i]>=48 && s[i]<=57){
                            s[i]= 'A';
                            break;
                        }
                    }
                    cout<<s<<endl;
                }
                else{
                    for(int i = 0;i<s.size();i++){
                        if(s[i]>=97 && s[i]<=122){
                            s[i]= 'A';
                            break;
                        }
                    }
                    cout<<s<<endl;
                }
        }
        else if(l==0){
                if(up>d){
                    for(int i = 0;i<s.size();i++){
                        if(s[i]>=65 && s[i]<=90){
                            s[i]= 'a';
                            break;
                        }
                    }
                    cout<<s<<endl;
                }
                else{
                    for(int i = 0;i<s.size();i++){
                        if(s[i]>=48 && s[i]<=57){
                            s[i]= 'a';
                            break;
                        }
                    }
                    cout<<s<<endl;
                }
        }
        else if(d==0){
            if(up>l){
                    for(int i = 0;i<s.size();i++){
                        if(s[i]>=65 && s[i]<=90){
                            s[i]= '1';
                            break;
                        }
                    }
                    cout<<s<<endl;
                }
                else{
                    for(int i = 0;i<s.size();i++){
                        if(s[i]>=97 && s[i]<=122){
                            s[i]= '1';
                            break;
                        }
                    }
                    cout<<s<<endl;
                }
        }
    }

}
