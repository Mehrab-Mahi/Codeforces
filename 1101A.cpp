#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,l,r,d;

    cin>>n;

    while(n--){
        cin>>l>>r>>d;

        if(d<l)
            cout<<d<<endl;
        else{
            cout<<((r/d)+1)*d<<endl;
        }
    }

}
