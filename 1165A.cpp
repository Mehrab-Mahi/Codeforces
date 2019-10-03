#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,y,x,ans=0;

    string s;

    cin>>n>>y>>x>>s;

    for(int i = s.size()-1;i>=s.size()-(x);i--){

        if(s[i]=='1'){
            ans++;

        }
    }

    if(s[s.size()-x-1]=='0'){
        //cout<<"sfd";
        ans++;
    }

    for(int i = s.size()-x-2;i>=s.size()-(y);i--){
        if(s[i]=='1'){
        //cout<<i<<endl;
            ans++;
        }
    }


    cout<<ans<<endl;
}
