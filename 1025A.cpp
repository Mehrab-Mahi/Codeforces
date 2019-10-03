#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int ss[27];

int main()
{
    optimize;

    int n;
    string s;

    cin>>n>>s;

    for(int i = 0 ; i<n ; i++){
        ss[s[i]-96]++;
    }

    for(int i = 1;i<=26;i++){
        if(ss[i]>=2){
            cout<<"Yes\n";
            return 0;
        }
    }

    if(n==1)
        cout<<"Yes\n";
    else
        cout<<"No\n";

}
