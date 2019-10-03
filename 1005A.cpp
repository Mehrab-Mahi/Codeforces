#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,c=0,d=0;
    vector<int>v;

    cin>>n;

    int a[n];

    for(int i = 0 ; i<n ;i++)cin>>a[i];

    for(int i = 0; i<n;i++){
        if(a[i]==1){
            c++;
            v.pb(d);
            d=0;
            d++;
        }
        else
            d++;
    }

    //if(a[n-1]==1){
        v.pb(d);
    //}

    cout<<c<<endl;

    for(int i = 1; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

}

