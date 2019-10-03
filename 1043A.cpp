#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,s=0;

    cin>>n;

    int a[n];

    for(int i = 0; i<n ;i++){
        cin>>a[i];

        s = s + a[i];
    }

    sort(a,a+n);

    int x = a[n-1];

    for(int i = x; ;i++){
        if(i*n>2*s){
            cout<<i<<endl;
            return 0;
        }
    }
}
