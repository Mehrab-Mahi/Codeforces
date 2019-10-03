#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    int p ,y ,b,c=1;

    cin>>p>>y;

    if( y-p==0)
        cout<<-1<<endl;

    else{
    vector<int> v;
    v.pb(2);
    int m = 0;
    for(int i = 3;i<=1000000;i++){
            m = 0;
            b = sqrt(i);
        for(int j = 2;j<=b+1;j++){
            if(i%j==0){
                m = 1;
                break;
            }
        }

             if(m==0){

                if(i>p){
                    c++;
                    break;
                }
                v.pb(i);


                }

    }

    int l = v.size(),n = 0,a = 0;
    //cout<<l<<endl;
    for(int i = y;i>=p+1;i--){
            n = 0;
        for(int j = l-1;j>=0;j--){
            if(i%v[j]==0)
                n=1;
        }

        if(n==0){
            cout<<i<<endl;
            a = 1;
            break;
        }
    }

    if(a==0)
        cout<<-1<<endl;
    }
}
