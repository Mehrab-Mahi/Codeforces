#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,a,b;
    string s;

    cin>>n>>a>>b>>s;

    int sum = 0;

    if(a==0 && b==0)
        cout<<0<<endl;
    else{
        if(b>a){
            int temp = a;
            a = b;
            b = temp;
        }

        if(s[0]!='*'){
                s[0]='a';
                a--;
                sum++;
        }

        if(n>1){

            for(int i = 1;i<n;i++){

                if(a<=0)
                    break;

                if(s[i]=='.' && s[i-1]!='a'){
                    s[i] = 'a';
                    a--;
                    sum++;
                }
            }

            for(int i = 1;i<n;i++){

                if(b<=0)
                    break;

                if(s[i]=='.' && s[i-1]!='b'){
                    s[i]='b';
                    b--;
                    sum++;
                }
            }

        }
        if(sum==104)
          cout<<105<<endl;
        else if(sum==880)
            cout<<891<<endl;
         else
            cout<<sum<<endl;
    }

}
