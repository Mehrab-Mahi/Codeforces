#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n , a,b,p=1,pa=0,pb=0,ph=0;

    cin>>n>>a>>b;

    for(int i = 1;i<=n;i++){

        if(i==a)
            pa = p;

        if(i==b)
            pb = p;

            if(i%2==0 && i!=n){
            p++;
        }
    }

    int t = 0;
    if(p%2==0)
        ph = p/2;
    else
        ph = p/2 + 1;

    if(n==2)
        cout<<"Final!"<<endl;
    else if(p%2==0){

        if((pa<=ph && pb>ph) || (pa>ph && pb<=ph)){
            cout<<"Final!"<<endl;
        }
        else{
            if(pa==pb)
                cout<<1<<endl;
            else{
                    t = 1;
                if(pa<=ph && pb<=ph){

                    a = 1;
                    b = ph;
                }
                else{
                    //cout<<pa<<" "<<pb<<" "<<ph<<endl;
                a = ph+1;
                    b = p;
                }

            while(1){
                    p =1;
                   //cout<<a<<" "<<b<<endl;
                for(int i = a;i<=b;i++){
                    if(i==pa){
                        pa = p;
                       // cout<<pa<<" "<<p<<endl;
                    }


                    if(i==pb){
                        pb = p;
                       // cout<<pb<<" "<<p<<endl;
                    }

                    if(i%2==0 && i!=b){
                        p++;
                    }
                }

           //cout<<pa<<" "<<pb<<endl;

            if(pa==pb){
                cout<<t+1<<endl;
                break;
            }
            else{
                t++;
                a = 1;
                b = p;

                if(b-1==1)
                {
                    cout<<t+1<<endl;
                    break;
                }
            }
            }
        }
        }
    }

    else{
        if((pa<ph && pb>ph) || (pa>ph && pb<ph)){
            cout<<"Final!"<<endl;
        }
        else{
            t = abs(pa-pb);

            cout<<t+1<<endl;
        }
    }
}
