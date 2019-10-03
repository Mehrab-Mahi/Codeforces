#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;

    cin>>s;

    int l,c=0,sn=0;

    cin>>l;
    vector<int>v;
    for(int i = 0; i<s.size();i++){
        if(s[i]=='?')
            c++;
        if(s[i]=='*'){
            sn++;
            v.pb(i);
        }
    }

    if(sn==0){
        int k = s.size()-c;
        if(l>k){
            cout<<"Impossible\n";
            return 0;
        }
        k = k-c;

        if(l<k){
            cout<<"Impossible\n";
            return 0;
        }

        int kk =  l - k;
        int x = 0;
        for(int i = 0;i<s.size();i++){
            if(i+1!=s.size()){
                if(x<kk && s[i+1]=='?'){
                    cout<<s[i];
                    x++;
                }

                else if(s[i+1]=='?' && x>=kk){
                    s[i]='1';
                }
                else if(s[i]!='?')
                    cout<<s[i];
            }
            else if(i==s.size()-1 && s[i]!='?' && s[i]!='*'){
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    else{
        int k = s.size()-c-sn;

        k = k - c-sn;

        if(l<k){
            cout<<"Impossible\n";
            return 0;
        }


        if(l==k){
            for(int i = 0;i<s.size();i++){
                if(i+1!=s.size()){
                    if(s[i+1]=='?' || s[i+1]=='*'){
                        s[i]='!';
                    }
                    else if(s[i]=='*' || s[i]=='?'){
                        s[i]='!';
                    }
                    else
                        cout<<s[i];
                }
                else if(i==s.size()-1  && s[i]!='?' && s[i]!='*')
                    cout<<s[i];
            }
            cout<<endl;
        }
        else if(l>k){
            int x = v[0];

            int xx = l-k;

            for(int i = 0;i<s.size();i++){
                if(i+1!=s.size()){
                    if(i+1==x){
                        for(int j = 0;j<xx;j++)
                            cout<<s[i];
                    }
                    else if(s[i+1]=='?' || s[i+1]=='*'){
                        s[i]='!';
                    }
                    else if(s[i]=='*' || s[i]=='?'){
                        s[i]='!';
                    }
                    else
                        cout<<s[i];
                }
                else if(i==s.size()-1  && s[i]!='?' && s[i]!='*')
                    cout<<s[i];
            }
            cout<<endl;
        }
    }



}
