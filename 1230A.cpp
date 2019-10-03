#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if((a+b == c+d) || (a+c == b+d) || (a+d == b+c) || (a==b+c+d) || (b==a+c+d) || (c==a+b+d) ||(d==a+b+c)  ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
