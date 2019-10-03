#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    ll n,k,m;

    string s;

    cin>>n>>k>>m;

    ll a[n],x,y;

    getchar();

    getline(cin,s);

    for(int i = 0;i<n;i++)
        cin>>a[i];

    vector<int>v[k];

    for(int i = 0;i<k;i++){
        cin>>x;

        for(int j = 0;j<x;j++){
            cin>>y;

            v[i].pb(y);
        }
    }

    ll l;

    for(int i = 0; i < k; i++){
       l = v[i].size();

       if(l>1){
            ll z[l];

            for(int j = 0;j< l;j++){
                z[j] = a[v[i][j]-1];

            }
            sort(z,z+l);

            for(int j = 0;j<l;j++){
                a[v[i][j]-1] = z[0];
            }
       }
    }



    string mah;

    getchar();

    ll sum = 0,space=0;

    getline(cin,mah);

    vector<char>vv;

    for(int i = 0;i<mah.size();i++){
        if(mah[i]!=' '){
            vv.pb(mah[i]);


            if(i==mah.size()-1){

                l = vv.size();

            space=0;

            if(l==1){
                for(int j = 0;j<s.size();j++){
                    if(vv[0]==s[j]){
                        sum = sum+a[space];

                        vv.clear();
                        break;
                    }
                    else if(s[j]==' ')
                        space++;

                }
            }
            else if(l==2){
                for(int j = 0;j<s.size()-1;j++){
                    if(vv[0]==s[j] && vv[1]==s[j+1] && s[j]!=' ' && s[j+1]!=' '){
                        sum = sum+a[space];

                        vv.clear();
                        break;
                    }
                    else if(s[j]==' ')
                        space++;

                }
            }
            else if(l>2){
                for(int j = 0;j<s.size()-2;j++){
                    if(vv[0]==s[j] && vv[1]==s[j+1] && vv[2]==s[j+2] && s[j]!=' ' && s[j+1]!=' ' && s[j+2]!=' '){
                        sum = sum+a[space];

                        vv.clear();
                        break;
                    }
                    else if(s[j]==' ')
                        space++;

                }
            }
            }

        }
        else{
            l = vv.size();
            space=0;
            if(l==1){
                for(int j = 0;j<s.size();j++){
                    if(vv[0]==s[j]){
                        sum = sum+a[space];

                        vv.clear();
                        break;
                    }
                    else if(s[j]==' ')
                        space++;

                }
            }

            else if(l==2){
                for(int j = 0;j<s.size()-1;j++){
                    if(vv[0]==s[j] && vv[1]==s[j+1] && s[j]!=' ' && s[j+1]!=' '){
                        sum = sum+a[space];

                        vv.clear();
                        break;
                    }
                    else if(s[j]==' ')
                        space++;

                }
            }
            else if(l>2){

                for(int j = 0;j<s.size()-2;j++){
                    if(vv[0]==s[j] && vv[1]==s[j+1] && vv[2]==s[j+2] && s[j]!=' ' && s[j+1]!=' ' && s[j+2]!=' '){
                        sum = sum+a[space];

                        vv.clear();
                        break;
                    }
                    else if(s[j]==' ')
                        space++;

                }
            }
        }

    }

    cout<<sum<<endl;
}
