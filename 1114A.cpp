#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z,a,b,c;

    cin>>x>>y>>z>>a>>b>>c;

    if(x>a){
        cout<<"NO\n";
        return 0;
    }
    else{
        a=a-x;

        int k = a+b;

        if(y>k){
            cout<<"NO\n";
            return 0;
        }
        else{
            k = k - y;
            k = k + c;

            if(z>k){
                cout<<"NO\n";
                return 0;
            }
            else{
                cout<<"YES\n";
                return 0;
            }
        }
    }
}
