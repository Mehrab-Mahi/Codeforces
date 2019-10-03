#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;
    vector<int>v;

    int n,k,m=0;

    cin>>n>>k;

    int a[n],b[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b,b+n);

    m = 1;
    int p = b[0];

    for(int i = 0;i<n;i++){
        if(a[i]==p){
            v.pb(i+1);
            break;
        }
    }

    if(n>1){
    for(int i = 1;i<n;i++){

        if(b[i]!=p){
            p = b[i];
            m++;

            for(int i = 0;i<n;i++){
                if(a[i]==p){
                v.pb(i+1);
                break;
                }
            }
        }
    }

    }
    if(k>m)
        cout<<"NO"<<endl;
    else{
        sort(v.begin(),v.end());

        cout<<"YES\n";

        for(int i = 0;i<k;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}
