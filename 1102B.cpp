#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k;

    cin>>n>>k;

    int a[n];

    for(int i = 0 ; i<n ;i++)
        cin>>a[i];

    int p = 0;

    for(int i = 0;i<n;i++){
        if(a[i]>k){
            p++;
        }
    }

    if(p==0)
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        int x ;

        if(n%k==0)
            x = n/k;
        else{
            x = (n/k)+1;
        }
        int y = 1;
        for(int i = 0;i<n;i++){
            a[i]=y;

            if((i+1)%x==0)
                y++;


            if(i!=n-1)
                cout<<a[i]<<" ";
            else
                cout<<a[i]<<endl;
        }
    }

}
