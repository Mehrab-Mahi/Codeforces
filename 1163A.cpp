#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m;

    cin>>n>>m;

    int x = n/2;

    int c = n - x;

    if(m==0){
        cout<<1<<endl;
        return 0;
    }

    if(n%2==0){
        if(m==c){
            cout<<x<<endl;
        }
        else if(m<c){
            cout<<x-(c-m)<<endl;
        }
        else{
            cout<<n-m<<endl;
        }
    }
    else{
        if(m==c || m==c-1){
            cout<<x<<endl;
        }
        else if(m>c){
            cout<<n-m<<endl;
        }
        else{
            c--;

            cout<<x-(c-m)<<endl;
        }
    }

}
