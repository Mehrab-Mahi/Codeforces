#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int x[n];

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    int a = 0,b = 0, c =0,p=0;

    for(int i =0 ;i<n;i++){
        if(x[i]>25){

            if(x[i]==50){
                if(a<=0){
                    cout<<"NO"<<endl;
                    p =1;
                    break;
                }
                else{
                    a--;
                    b++;
                }

            }

            else if(x[i]==100){
                if(b<=0){
                    if(a<3){
                        cout<<"NO"<<endl;
                        p = 1;
                        break;
                    }
                    else{
                        a = a-3;
                        c++;
                    }

                }
                else{
                    if(a<=0){
                        cout<<"NO"<<endl;
                        p = 1;
                        break;
                    }
                    else{
                        b--;
                        a--;
                        c++;
                    }

                }

            }

        }

        else
            a++;

    }

    if(p==0)
        cout<<"YES"<<endl;


}
