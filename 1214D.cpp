#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int n,m;

bool check_path(int x,int y, char a[][m]){
    return true;
}


int main()
{
    optimize;

    //int n,m;
    cin>>n>>m;

    char a[n][m];

    vector<int>v[n*m];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }


    if(n==1 || m==1){
        cout<<1<<endl;
    }
    else{
        for(int i = 0;i<n-1;i++){
            if(a[0][i]=='.' && a[1][i]=='.'){
                check_path(0,i,v);
                check_path(1,i,a);
                cout<<2<<endl;
                break;
            }

            if(a[0][i]=='#' || a[1][i]=='#'){
                cout<<1<<endl;
                break;
            }
        }
    }
}

