#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;

    int m=0,c=0,pos,o=0,oc=0,cc=0,op=0,n=0;

    cin>>s;

    vector<int>v,vv;

    for(int i = 0 ; i<s.size() ; i++){
        if(s[i]=='[' && o==0){
            op = i;
            o=1;
        }

        if(s[i]==':')
            v.pb(i);


        if(s[i]==']')
            c = i;
    }

    //cout<<op<<" "<<c<<endl;

    if(v.size()<2 || o==0 || c==0 || c<op){
            //cout<<v.size()<<" "<<o<<" "<<c<<" "<<op<<endl;;
        cout<<-1<<endl;
        return 0;
    }
    else{


        m = 0,n=0;
        for(int i =0;i<v.size();i++){
            if(v[i]>op && v[i]<c){
                vv.pb(v[i]);

            }
        }

        //cout<<vv[0]<<" "<<vv[v.size()-1]<<endl;
        if(vv.size()<2){
            cout<<-1<<endl;
            return 0;
        }
        int cnt=0;

        for(int i = vv[0];i< vv[vv.size()-1];i++){
                //cout<<"fsd\n";
            if(s[i]=='|')
                cnt++;
        }

        cout<<cnt+4<<endl;


    }







}
