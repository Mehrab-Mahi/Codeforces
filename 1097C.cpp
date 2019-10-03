#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;

    string s[n];

    for(int i = 0 ;i<n ;i++)
        cin>>s[i];

    sort(s,s+n);
   // cout<<endl;
    //for(int i = 0;i<n;i++)
      //  cout<<s[i]<<endl;
    //cout<<endl;
    int in[n],out[n];

    for(int i = 0 ; i<n ;i++){
            in[i] = 0, out[i] = 0;
        for(int j = 0; j<s[i].size() ;j++){
            if(s[i][j]=='(')
                in[i]++;
            else
                out[i]++;
        }
    }

    map<int,int>mp;



    int c = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<n && i!=j;j++){
            if((in[i]+in[j])==(out[i]+out[j]) && mp[i]==0 && mp[j]==0){

                string ss,tt;
                int x=0,xx=0,m=0;
                ss=s[i],tt=s[j];

                if(tt.size()>ss.size())
                    swap(ss,tt);


                for(int i = 0;i<tt.size();i++){
                    if(tt[i]=='(')
                        x++;
                    else if(tt[i]==')')
                        xx++;

                    if(ss[i]=='(')
                        x++;
                    else if(ss[i]==')')
                        xx++;

                    if(xx>x){
                        m=1;
                        break;
                    }
                }

                if(m==0){
                    c++;
                    mp[i]=1;
                    mp[j]=1;
                }


            }

        }
    }

    cout<<c<<endl;


}
