#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll w1,h1,w2,h2,s=0;

    cin>>w1>>h1>>w2>>h2;

    s = 2*(h1+h2)+4;

    s+=(w1+w2);

    if(w1!=w2)
        s+=abs(w1-w2);

    cout<<s<<endl;

}
