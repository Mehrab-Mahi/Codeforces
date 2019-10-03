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

    for(int i = 0 ; i<n;i++)
        cin>>a[i];


    for(int i = 0 ; i<m;i++)
        cin>>b[i];


    int p = 0,c = 0;

    for(int i = 0 ; i<n;i++){
        if(a[i]<=b[p]){
            c++;
            p++;
        }

        if(p>=m)
            break;
    }

    cout<<c<<endl;
}

