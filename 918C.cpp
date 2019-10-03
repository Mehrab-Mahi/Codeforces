#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin>>s;

    int l=s.size();

    int p = 2,x,y,pos ,m,n,sum=0;

    while(1){
        for(int i=0;i<l;i++){
            x = i;
            y = i+p-1;
            m =0;
            n=0;
            pos = p/2;

            while(pos){

                if(s[x] == '(' || s[x]== '?'){
                    m++;
                }

                if(s[y] == ')' || s[y]== '?'){
                    n++;
                }
                x++;
                y--;
                pos--;
            }

            if(m==n){
                if((p/4)<=m){
                        int a=0,b=0,f=0;
                    for(int j=i;j<i+(p/4);j++){
                        if(s[j]==')')
                            a++;
                        else if(s[j]=='('){
                            b++;

                            if(a>=b){
                                a--;
                                b--;
                            }
                            else if(b>a)
                            {
                                f=1;
                                break;
                            }
                        }
                    }

                    if(f==0){
                        sum++;
                    }
                }
            }
        }

        p = p+2;

        if(p>l)
            break;
    }

    cout<<sum<<endl;
}
