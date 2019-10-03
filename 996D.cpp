#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int aa[101],b[101],c[101];

int main()
{
    optimize;


    int n,s=0,t=0;

    cin>>n;

    vector<int>v[n+1],vv[n+1];

    int m = 2*n;

    int a[m];

    for(int i = 0;i<m;i++)
        cin>>a[i];


    for(int i = 0;i<m;i++){
        if(aa[a[i]]==0){
            aa[a[i]]=1;
            //cout<<a[i]<<"   "<<aa[a[i]]<<endl;
            for(int j = i+1;j<m;j++){
                if(a[j]==a[i])
                    break;
                else{
                    //cout<<a[j]<<endl;
                    v[a[i]].pb(a[j]);
                    vv[a[i]].pb(a[j]);
                }
            }
        }
    }

    //cout<<"thik ase"<<endl;

    for(int i = 0;i<m;i++){

        if(b[a[i]]==0 &&  v[a[i]].size()>0){
            b[a[i]] = 1;
            //cout<<a[i]<<"  "<<v[a[i]].size()<<endl;
            s = s+v[a[i]].size();

            int p = a[i];

            for(int k = 1;k<=n;k++){
                for(int x = 0; x<v[k].size(); x++){
                    if(v[k][x]==p){
                        //cout<<k<<"  "<<v[k][x]<<endl;
                        v[k].erase(v[k].begin()+x);
                        x--;
                    }
                }
            }

        }
    }

    //cout<<"paise"<<endl;

    for(int i = m-1;i>=0;i--){
        if(c[a[i]]==0 && vv[a[i]].size()!=0){
                c[a[i]] = 1;
            t = t+vv[a[i]].size();

           int p = a[i];

            for(int k = 1;k<=n;k++){
                for(int x = 0; x<vv[k].size(); x++){
                    if(vv[k][x]==p){
                        vv[k].erase(vv[k].begin()+x);
                        x--;
                    }
                }
            }

        }
    }


    if(s>t)
        cout<<t<<endl;
    else
        cout<<s<<endl;


}
