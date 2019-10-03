#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m,a,b,c,d;

    cin>>n>>m;

    char ch[n+1][m+1];

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>ch[i][j];
        }
    }
    int k = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m ; j++){
            if(ch[i][j]=='B'){
                a = i;
                b = j;
                k =1;
                break;
            }
        }
        if(k==1)
            break;
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m ; j++){
            if(ch[i][j]=='B'){
                c = i;
                d = j;
            }
        }
    }

    //cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
    cout<<(a+c)/2<<" "<<(b+d)/2<<endl;

}

