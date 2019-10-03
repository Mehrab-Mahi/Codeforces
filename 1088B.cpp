#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,k;

    cin>>n>>k;

    ll a[n],c=0,now=0,cnt=0;

    for(int i = 0 ; i < n ; i++)
        cin>>a[i];

    sort(a,a+n);
    now = a[0];
    while(k--){
        cout<<now - c<<endl;
        //cout<<now<<"   "<<c<<endl;
        c=now;
        cnt++;

        if(cnt<n){
        for(int i = cnt;i<n;i++){
            if(a[i]-c!=0){
                now = a[i] ;
                cnt = i;
                break;
            }
            else if(i==n-1 && a[i]-c==0){
                c=0;
                now = 0;
                cnt = 100000000;
            }
            else{
                continue;
            }
        }
        }
        else{
            c=0;
            now = 0;
            cnt = 100000000;
        }

    }

}
