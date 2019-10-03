#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int a[27];

int main()
{
    optimize;

    int n,ans=0;

    cin>>n;
    string s;

    for(int i = 0;i<n;i++){
        cin>>s;

        a[s[0]-'a']++;
    }
    int x;
    for(int i = 0;i<26;i++){
        if(a[i]>0){
            if(a[i]%2==0){
                x = a[i]/2;
                ans+=2* ((x*(x-1))/2);
            }
            else{
                x = a[i]/2;
                ans+=(x*(x-1))/2;
                x++;
                ans+=(x*(x-1))/2;
            }
        }
    }

    cout<<ans<<endl;


}
