#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,h,a,b,k,ta,tb,fa,fb,x,y,f;

    cin>>n>>h>>a>>b>>k;

    for(int i = 1;i<=k ; i++){
        cin>>ta>>fa>>tb>>fb;

        if(fa>=a && fa<=b){
            if(ta==tb){
                cout<<abs(fa-fb)<<endl;
            }
            else{
                x = abs(ta-tb);
                cout<<x+abs(fa-fb)<<endl;
            }
        }
        else{

            if(ta==tb){
                cout<<abs(fa-fb)<<endl;
            }
        else{
            x = abs(fa-a);
            y = abs(fa-b);
            f = a;

            if(x>=y){
                x = y;
                f = b;
            }

            cout<<x+abs(ta-tb)+abs(fb-f)<<endl;
        }
        }
    }

}

