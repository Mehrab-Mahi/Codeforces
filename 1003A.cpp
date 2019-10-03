#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int a[101];
int main()
{
    optimize;

    int n;

    cin>>n;

    int b,p=0;

    for(int i = 0 ; i<n;i++){
        cin>>b;

        a[b]++;
    }

    for(int i = 0 ; i< 101;i++){
        if(a[i]>p)
            p = a[i];
    }

    cout<<p<<endl;

}

