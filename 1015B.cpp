#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s,t,ss,tt;

    int n,m = 0,p;
    vector<int>v,vv;

    cin>>n>>s>>t;

    ss = s, tt = t;

    sort(ss.begin(),ss.end());
    sort(tt.begin(),tt.end());

    if(ss!=tt){
        cout<<-1<<endl;
    }
    else if(s==t){
        cout<<0<<endl<<endl<<endl;
    }
    else{

        while(s!=t){
                p++;
            for(int i = 0;i<n ; i++){
                if(s[i]!=t[i]){
                    char a  = t[i];
                    int pos;
                    vv.pb(i+1);
                    for(int j = i+1;j<n;j++){
                        if(a==s[j]){
                            pos = j;
                            break;
                        }
                        else{
                            vv.pb(j+1);
                        }
                    }
                    m = m + abs(pos-i);

                    for(int i = vv.size()-1;i>=0;i--){
                        v.pb(vv[i]);
                    }
                    vv.clear();
                    //cout<<m<<endl;
                    s.erase(s.begin()+pos);
                    //cout<<s<<endl;
                    s.insert(s.begin()+i,a);
            //cout<<s<<endl<<t<<endl<<endl;;
                    break;
                }
            }

        }

        cout<<m<<endl;

        if(m==1){
            cout<<v[0]<<endl;;
        }
        else{
            cout<<v[0];

            for(int i = 1 ; i<m ;i++){
                cout<<" "<<v[i];
            }

            cout<<endl;
        }

    }


}

