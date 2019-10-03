#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int a,b,k,t=0;

    cin>>a>>b;

    k = abs(a-b);

    if(k==1){
        cout<<1<<endl;
    }
    else{
        if(k%2==0){
            k = k/2;

            for(int i = 1;i<=k;i++){
                t = t+i;
            }

            t = t*2;
            cout<<t<<endl;
        }

        else{
            k = k/2;
            k = k+1;

            for(int i = 1;i<=k;i++){
                t = t + i;

                if(i==k-1){
                    t = t*2;
                }
            }

            cout<<t<<endl;
        }
    }
}
