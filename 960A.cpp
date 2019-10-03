#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
   string s;

   int a=0,b=0,c=0,m = 0 ;

   cin>>s;

   int l = s.size(),pos=0;

   if(s[0]!='a'){
    cout<<"NO"<<endl;
   }
   else{
        a=1;

    for(int i = 1;i<l;i++){
        if(s[i]=='b'){
            pos = i;
            m=1;
            break;
        }
        else if(s[i]=='c'){
            m = 3;
            break;
        }
        else
            a++;
    }

    if(m==1){
        int k = pos;
        for(int i = k;i<l;i++){
            if(s[i]=='c'){
                pos = i;
                m=2;
                break;
            }
            else if(s[i]=='a'){
                m = 3;
                break;
            }
            else
                b++;
        }

        if(m==2){
            k = pos;

            for(int i = k;i<l;i++){
                if(s[i]=='a' || s[i]=='b'){
                    m = 3;
                    break;
                }
                else
                    c++;
            }


            if(m==2){
                if(a==c || b==c){
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;

        }
        else
            cout<<"NO"<<endl;

    }
    else
        cout<<"NO"<<endl;

   }

}
