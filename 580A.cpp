#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,x=0,y=0;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    y++;

    for(int i = 0;i<n-1;i++){
        if(a[i]>a[i+1]){
            if(x<y)
                x = y;

            y = 1;
        }
        else
            y++;
    }

    if(y>x)
        x = y;

    cout<<x<<endl;

}
