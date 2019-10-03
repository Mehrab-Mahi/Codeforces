#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m;

    vector<int>v;

    cin>>n>>m;

    int a[n],b[m];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i = 0 ; i<m ;i++){
        cin>>b[i];

        for(int j = 0;j<n;j++){
            if(a[j]==b[i]){
                v.pb(j);
                break;
            }
        }
    }

    sort(v.begin(),v.end());

    if(v.size()==0)
        cout<<endl;
    else if(v.size()==1)
        cout<<a[v[0]]<<endl;
    else{
        cout<<a[v[0]];

        for(int i = 1 ; i<v.size() ; i++){
            cout<<" "<<a[v[i]];
        }

        cout<<endl;
    }

}
