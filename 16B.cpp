#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int a[11];
int main()
{
    optimize;

    int n,m,x,y,s=0,c=0;

    cin>>n>>m;

    for(int  i = 0 ; i < m ; i++){
        cin>>x>>y;

        a[y] = a[y]+x;
    }

    //sort(a,a+11);

    for(int i = 10;i>=1;i--){
        if((c+a[i])>n){
            int p = c+a[i]-n;
             s = s + ((a[i]-p)*i);

             break;
        }
        else{
            c = c + a[i];
            s = s + (a[i]*i);

        }
    }

    cout<<s<<endl;

}
