#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int b[105];
int main()
{
    optimize;

    int n,x,y,s = 0;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    sort(a,a+n);
    for(int i = 0;i<=100;i++){
        if(b[i]!=0)
            s++;
    }

    if(s!=2){
        cout<<"NO\n";
    }
    else{
        x = a[0];
        y = a[n-1];

        if(b[x]==b[y])
            cout<<"YES\n"<<x<<" "<<y<<endl;
        else
            cout<<"NO\n";
    }

}
