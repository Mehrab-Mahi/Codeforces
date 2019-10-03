#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main(){

	optimize;

    unsigned ll n;

    string s , t;

    cin>>n>>s>>t;

    unsigned ll x = 0,y=0,oo=0,one=0,on=0;
    for(int i = 0;i<n;i++){

        if(s[i]=='0' && t[i]=='0')
            oo++;
        else if(s[i]=='0' && t[i]=='1')
            x++;
        else if(s[i]=='1' && t[i]=='0')
            on++;

        if(s[i]=='1' && t[i]=='1'){
            one++;
        }

    }

    unsigned ll m = one*oo;
    //cout<<oo<<" "<<x<<" "<<on<<" "<<one<<endl;
    m = m + (x*on)+(oo*on) ;


    cout<<m<<endl;


}
