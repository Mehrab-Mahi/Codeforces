#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,sum=0;

    map<int,int>mp;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];

        if(a[i]!=0)
            mp[a[i]]=1;
        else
            mp[a[i]]=0;
    }

    for(int i = 0;i<n;i++){
        if(mp[a[i]]!=0){
            sum++;
            mp[a[i]]=0;
        }
    }

    cout<<sum<<endl;

}
