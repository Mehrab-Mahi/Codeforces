#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;

    cout<<1<<" ";

    if((n-2)%3==0){
        cout<<2<<" "<<n-3<<endl;
    }
    else
        cout<<1<<" "<<n-2<<endl;

}
