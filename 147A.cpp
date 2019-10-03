#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    string s;
int p=0;
    getline(cin,s);
    vector<char>v;
    for(int i = 0;i<s.size();i++){
        v.pb(s[i]);
    }

    for(int i = 0; i<v.size();i++){
        //cout<<i<<endl;
        if(v[i]==' '){
            for(int j = i+1; j<v.size();j++){
                if(v[j]==' '){

                    v.erase(v.begin()+j);
                    j=j-1;
                }
                else if(v[j]=='.' || v[j]==',' || v[j]=='!' || v[j]=='?'){
                        //cout<<v[i-1]<<v[i]<<endl;
                    v.erase(v.begin()+i);

                    v.insert(v.begin() + i+1, ' ');

                    i=i;
                    break;
                }
                else{
                    i = j;
                    break;
                }
            }
        }
        else if(v[i]=='.' || v[i]==',' || v[i]=='!' || v[i]=='?'){

            v.insert(v.begin() + i+1, ' ');

            for(int j = i;j<v.size();j++){
                if(v[j]==' '){
                    v.erase(v.begin()+j);
                    cout<<"fsdf"<<endl;
                }
                else{
                    i = j;
                    break;
                }

                if(j>=v.size())
                    break;
            }
        }
        //cout<<p<<endl;
        if(i>=v.size())
            break;
    }

    for(int i = 0;i<v.size();i++)
        cout<<v[i];

    cout<<endl;

}

