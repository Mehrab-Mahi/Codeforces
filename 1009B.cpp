#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;
    vector<int>v;
    cin>>s;

    int l = s.size(),pos,k=0;

    if(l==1){
        cout<<s<<endl;
    }
    else {

    int one = 0,zero = 0 ,two=0;

    for(int i = 0;i<l;i++){

        if(s[i]=='1'){

                one = 1,zero=0,two=0;

            if(i+1>=l)
                v.pb(1);
            else{

            for(int j = i+1;j<l;j++){

                if(s[j]=='2'){
                   // pos=j;
                    //cout<<"one "<<j<<endl;
                    for(int x = 0 ; x<zero; x++){
                        v.pb(0);
                    }

                    for(int x = 0 ; x<one; x++){
                        //cout<<1<<endl;
                        v.pb(1);
                    }
                    i = j-1;

                    zero = 0;
                    one = 0;
                    two=0;
                    break;

                }
                else if(s[j]=='1')
                    one++;
                else
                    zero++;

                    if(j>=l-1){
                        for(int x = 0 ; x<zero; x++){
                        v.pb(0);
                    }

                    for(int x = 0 ; x<one; x++){
                        v.pb(1);
                    }
                    i = j-1;
                    k =1;
                    break;
                    }
            }}
        }

        else if(s[i]=='2'){
            two = 1;
            one = 0;
            zero = 0;
            if(i+1>=l)
                v.pb(2);
            else{
            for(int j = i+1;j<l;j++){
                    //cout<<j<<endl;
                if(s[j]=='0'){


                    for(int x = 0 ; x<one; x++){
                        v.pb(1);
                    }

                    for(int x = 0 ; x<two; x++){
                        v.pb(2);
                    }
                    i = j-1 ;
                    one =0;
                    two=0;
                    zero=0;
                    break;


                }
                else if(s[j]=='1')
                    one++;
                else
                    two++;

                    if(j>=l-1){

                   // cout<<"one "<<one<<endl;
                   // cout<<"two "<<two<<endl;
                        for(int x = 0 ; x<one; x++){
                        v.pb(1);
                    }

                    for(int x = 0 ; x<two; x++){
                        v.pb(2);
                    }
                    i = j - 1;
                    k = 1;
                    break;
                    }

            }}


        }

        else
            v.pb(0);


        if(k==1)
            break;

    }

    for(int x = 0 ; x<v.size();x++){
        cout<<v[x];
    }
    cout<<endl;
    }
}

