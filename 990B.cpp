#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int b[2000009];
int main()
{
    optimize;

    int  n,k,c=0;

    cin>>n>>k;

    int a[n];

    for(int i = 0; i<n ;i++) cin>>a[i];

    sort(a,a+n);
    //reverse(a,a+n);

    for(int i = 0;i<n-1;i++){
            if(a[i]<a[i+1] && a[i]+k>=a[i+1]){
                b[a[i]]=1;

            }

    }

    for(int i = 0; i < n; i++){
        if(b[a[i]]==0)
            c++;
    }


    cout<<c<<endl;

}
