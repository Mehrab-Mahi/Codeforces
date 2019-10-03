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

    int a[n],b;
    map<int,int>mp;

    for(int i = 0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i+1;
    }
    int l=0;
    for(int i = 0;i<n;i++){
        cin>>b;

        if(mp[b]>l && i!=n-1){
            cout<<mp[b]-l<<" ";
            l = mp[b];
        }
        else if(mp[b]>l && i==n-1){
            cout<<mp[b]-l<<endl;
            l = mp[b];
        }
        else
            cout<<0<<" ";
    }

}
