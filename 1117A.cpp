#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
ll a[100005],d[100005];
int main()
{
    optimize;

    int n;

    cin>>n;

    int a[n],b[n];

    ll s = 0;

    for(int i = 0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b,b+n);
    int c = 0,d = 0;
    for(int i = 0;i<n;i++){
        c = 0;
        if(a[i]==b[n-1]){
            c++;
            if(i+1<n){
            for(int j = i+1;j<n;j++){
                if(a[j]==b[n-1])
                    c++;
                else{
                    break;
                    i = j;
                }

                if(j==n-1){
                    i = j;
                }
            }
            }
        }

        if(c>d)
            d = c;
    }

    cout<<d<<endl;

}
