#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,ans=100000000,x;

    string s;

    cin>>n>>s;

    for(int i = 0; i<n-3;i++){
        x = 0;

        x+=min(abs(s[i]-'A'),(abs('Z'-s[i])+1));
        x+=min(min(abs(s[i+1]-'C'),(abs('Z'-s[i+1])+3)),abs('A'-s[i+1])+1+abs('C'-'Z'));
        x+=min(min(abs(s[i+2]-'T'),(abs('Z'-s[i+2])+20)),abs('A'-s[i+2])+1+abs('T'-'Z'));
        x+=min(min(abs(s[i+3]-'G'),(abs('Z'-s[i+3])+7)),abs('A'-s[i+3])+1+abs('G'-'Z'));


        if(x<ans)
            ans=x;

    }
    cout<<ans<<endl;

}
