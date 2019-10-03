#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,x=0,y=0,h,w,a,b;

    char z;



    cin>>n;

    while(n--){
        cin>>z>>a>>b;


        if(a>b)
            swap(a,b);


        if(z=='+'){
            if(a>x){
                x = a;
            }

            if(b>y)
                y = b;
        }
        else{

            if((a>=x && b>=y) || (a>=y && b>=x)){
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";

        }
    }

}
