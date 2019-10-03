#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m;

    cin>>n>>m;

    int a[n],b[m];

    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<m;i++) cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);


    int pot=0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i]==b[j]){
                pot = a[i];
                break;
            }
        }
        if(pot!=0)
            break;
    }

    if(pot!=0)
        cout<<pot<<endl;
    else{
        int x = a[0],y = b[0];
        if(x>y)
            cout<<y<<x<<endl;
        else
            cout<<x<<y<<endl;
    }


}
