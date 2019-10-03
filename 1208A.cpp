#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int a,b,n,temp,t;

    cin>>t;

    while(t--){

    cin>>a>>b>>n;

    temp = a^b;

    if(n%3==0)
        cout<<a<<endl;
    else if(n%3==1)
        cout<<b<<endl;
    else
        cout<<temp<<endl;

    }

}
