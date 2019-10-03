#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m,off;

    cin>>n>>m;

    off = m;

    int a[m],p=0,q=0;

    memset(a,0,sizeof(a));
    string s[n];

    for(int i = 0;i<n;i++) cin>>s[i];

    for(int i = 0;i<n;i++){
        p++;
        for(int j = 0;j<m;j++){
            if(s[i][j]=='1' && a[j]==0){
                a[j] = 1;
                off--;

                if(off==0){
                    q = 1;
                    break;
                }
            }
        }
        if(q==1)
            break;

    }

    if(p>=n){
        cout<<"NO\n";
    }
    else
        cout<<"YES\n";

}
