#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,x,y,sys1=0,sys2=0,c=0,m=0;
    vector<int>v;

    cin>>n>>x>>y;

    string s;

    cin>>s;

    for(int i = 0;i<s.size();i++){
        if(s[i]=='0')
            v.pb(i);
    }

    if(v.size()==0)
        cout<<0<<endl;
    else if(v.size()==1){
        cout<<y<<endl;
    }
    else{
        sys2 = y*v.size();
        int a=-1,b;
        for(int i = 0; i<v.size();i++){
            if(a=-1){
                a = v[i];
            }

            if(i+1<v.size() && v[i+1]-v[i]!=0){
                b = v[i]+1;
                i = i+1;

                reverse(s.begin()+a,s.begin()+b);
                sys1 = sys1+x;

            }
        }

        for(int i = 0;i<s.size();i++){
            if(s[i]==0){
                for(int j = i+1;j<s.size();j++){
                    if(s[j]==1){
                        c++;
                        i = j;
                        break;
                    }

                    if(j==s.size()-1){
                        m = 1;
                        i = j;
                    }
                }
            }
        }

        sys1 = sys1+c*y;

        if(m==1)
            sys1 = sys1 + y;

        if(sys1>sys2)
            cout<<sys2<<endl;
        else
            cout<<sys1<<endl;
    }



}

