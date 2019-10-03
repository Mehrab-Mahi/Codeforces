#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int a[51],b[51];
int main()
{
    vector<int>v;
    int n;
    cin>>n;

    for(int i = 1;i<=n;i++){
        cin>>a[i];

        b[a[i]]++;
    }

    for(int i = n;i>=1;i--){
        if(b[a[i]]!=0){
            v.pb(a[i]);
            b[a[i]]=0;
        }
    }
    int l = v.size();
    cout<<l<<endl;

    reverse(v.begin(),v.end());

    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";

    cout<<endl;
}
