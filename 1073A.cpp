#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
int a[150];
int main()
{
    optimize;
    int n,p;
    string s;

    cin>>n>>s;

    for(int i = 0;i<n;i++){
        a[s[i]]++;
    }


    string ss = "";
    for(int i = 0;i<n;i++){
        if(s[i]!=s[i+1] && i+1<n){
            string sss(1,s[i+1]);
            ss.insert(0,sss);
            string st(1,s[i]);

            ss.insert(0,st);

            cout<<"YES\n"<<ss<<endl;
            return 0;
        }
    }

    cout<<"NO\n";

}
