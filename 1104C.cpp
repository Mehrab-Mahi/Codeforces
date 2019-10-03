#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int a[4][4];

    vector<int>v,vv;

    memset(a,0,sizeof(a));

    string s;

    cin>>s;

    for(int i = 0;i<s.size();i++){
        if(s[i]=='0'){
            if(a[3][0]==0){
                a[3][0] = 1;
                a[2][0] = 1;
                v.pb(3);
                vv.pb(1);
            }
            else{
                v.pb(1);
                vv.pb(1);

                a[3][0] = 0;
                a[2][0] = 0;
            }
        }
        else{
            if(a[0][3]==0){
                a[0][3] = 1;
                a[0][2] = 1;
                v.pb(1);
                vv.pb(3);
            }
            else{
                v.pb(1);
                vv.pb(1);

                a[0][3] = 0;
                a[0][2] = 0;
            }
        }
    }

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" "<<vv[i]<<endl;
    }


}
