#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int a[101];

int main()
{
    optimize;

    int n,m,p,q;
    vector<int>v;

    cin>>n>>m;

    for(int i = 0; i<n ; i++ ){
        cin>>p>>q;

        for(int i = p;i<=q;i++){
            a[i] = 1;
        }
    }

    for(int i = 1;i<=m;i++){
        if(a[i]==0)
            v.pb(i);
    }

    cout<<v.size()<<endl;

    if(v.size()>0){
        cout<<v[0];

        if(v.size()>1){
            for(int i = 1;i<v.size();i++)
                cout<<" "<<v[i];
        }

        cout<<endl;
    }
    else{
        cout<<endl<<endl;
    }

}

