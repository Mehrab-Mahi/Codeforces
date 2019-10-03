#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,x=0,y=0,d=1,a,b;

    cin>>n;

    while(n--){
        cin>>a>>b;

        if(a!=x){
            if(x<=y && a>=y){
                d =d + 1;

                if(y<=a && b>=a)
                    d+=(a-y);
            }

        }
        else if(b!=y){
            if(y<=x && b>=x){
                d =d + 1;

                if(x<=b && a>=b)
                    d+=(b-x);
            }
        }

        cout<<"  "<<d<<endl;

        x = a;
        y = b;
    }

    cout<<d<<endl;

}
