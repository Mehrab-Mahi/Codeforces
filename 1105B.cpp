#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,t,c=0,cc=0,m=0,point;

    string s;

    cin>>n>>t>>s;

    for(int i = 97;i<=122;i++){
        cc=0;
        int l = 0;
        for(int j = 0;j<n;j++){
            if(s[j]==i){
               l++;
            }
            else
                l=0;

            if(l==t){
                cc++;
                l = 0;
            }

        }

        if(cc>c){
            c = cc;
            //cout<<c<<" "<<point<<endl;;
        }

    }



    cout<<c<<endl;



}
