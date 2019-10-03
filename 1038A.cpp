#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int a[92];

///65-90
int main()
{
    optimize;

    int n,k,ss=1000000;

    string s;

    cin>>n>>k>>s;

    for(int i = 0;i<n;i++){
        a[s[i]]++;
    }

    int x = 65;
    for(int i = 0;i<k;i++){
        if(a[x]==0){
            cout<<0<<endl;
            return 0;
        }

        if(ss>a[x])
            ss = a[x];

        x++;
    }

    cout<<k*ss<<endl;

}
