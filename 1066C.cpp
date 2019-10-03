#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int a[200005];
int main()
{
    optimize;

    int q,n,x=0,y=0;

    cin>>q;
    char c;
    ll lf,rf;
    cin>>c>>n;
    q--;
    a[n] = x;
    while(q--){
        cin>>c>>n;

        if(c=='L'){
            x--;
            a[n] = x;
        }
        else if(c=='R'){
            y++;
            a[n] = y;
        }
        else{
            lf = a[n] - x;
            rf = y - a[n];

            if(lf>rf)
                cout<<rf<<endl;
            else
                cout<<lf<<endl;
        }

    }

}
