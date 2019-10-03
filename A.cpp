#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n,p,e,ex,l,he,hex;

    cin>>t;

    for(int x = 1;x<=t;x++){
    vector<int>v[101],vv,vx,tt;
        cin>>n>>p;
        he=109,hex=-1;
        for(int i = 0;i<n;i++){
            cin>>e>>ex;
            if(e<he)
                he=e;
            if(hex<ex)
                hex = ex;
            for(int j = e;j<=ex;j++){
                v[j].pb(i+1);
            }
        }
      /*  l = -1;
        for(int i = 0;i<101;i++){
            if(v[i].size()>l)
                l = i;
        }  */


        for(int z = he;z<=hex;z++){

            if(v[z].size()>=p){
                tt.pb(0);
                break;
            }
            vv.clear();

            for(int i = 0;i<v[z].size();i++){
                vv.pb(v[z][i]);
            }

        for(int i = z+1;i<=hex;i++){
            if(v[i].size()>=p){
                tt.pb(0);
                break;
            }
            else if(v[i].size()>0){
                vx = v[i];
                for(int j = 0;j<vv.size();j++){
                    for(int k = 0;k<vx.size();k++){
                        if(vv[j]==vx[k])
                            vx[k] = 0;
                    }
                }

                for(int j = 0;j<vx.size();j++){
                    if(vx[j]!=0)
                        vv.pb(vx[j]);
                }
                if(vv.size()>=p){
                    tt.pb(i-z);
                }

                //sort(vv.begin(),vv.end());

            }
        }

        }

        sort(tt.begin(),tt.end());

        printf("Case %d: %d\n",x,tt[0]);

    }

}
