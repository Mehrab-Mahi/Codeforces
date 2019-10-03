#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

ll a[20][20];

int main()
{
    optimize;
    ll k;
    int n,m,s = 0,y = 0;

    cin>>n>>m>>k;
    vector<ll>v[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0 ;j<m; j++){
            cin>>a[i][j];
        }
    }

    v[0][0].pb(a[0][0]);

    for(int i = 1;i<m;i++){
        //y = a[0][i]^v[0][i-1][0];
        v[0][i].pb(a[0][i]^v[0][i-1][0]);
    }

     for(int i = 1;i<n;i++){
        //a[i][0] = a[i][0]^a[i-1][0];

        v[i][0].pb(a[i][0]^v[i-1][0][0]);
    }

    for(int i = 1;i<n;i++){

        for(int j = 1 ; j<m ;j++){

            for(int x = 0; x<v[i-1][j].size() ; x++){
                y = a[i][j]^v[i-1][j][x];
                v[i][j].pb(y);

            }
            v[i-1][j].clear();

            for(int x = 0; x<v[i][j-1].size() ; x++){
                y = a[i][j]^v[i][j-1][x];
                v[i][j].pb(y);

            }

            cout<<i<<" "<<j<<"-------"<<v[i][j].size()<<endl;

        }
    }

    //cout<<v[n-1][m-1].size()<<endl;

    for(int i = 0 ; i<v[n-1][m-1].size();i++){
        //cout<<v[n-1][m-1][i]<<endl;
        if(v[n-1][m-1][i]==k)
            s++;
    }

    cout<<s<<endl;

}

