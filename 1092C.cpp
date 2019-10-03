#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;

    int m = 2*n-2;

    string s[m],t[m];

    for(int i = 0 ; i < m ; i++){
        cin>>s[i];
        t[i] = s[i];
    }

    sort(t,t+m);

    vector<string>vp,vs;
    map<string,int>mp;
    map<int,int>mpf;

    for(int i = m-1;i>0;i--){
        if(t[0].size()+t[i].size()==n){
            vp.pb(t[0]+t[i]);
        }
    }

    for(int i = m-1;i>0;i--){
        if(t[0].size()+t[i].size()==n){
            vs.pb(t[i]+t[0]);
        }
    }

    //cout<<"fsd\n";

    int pre=0,suf=0;

    for(int i = 0;i<vp.size();i++){

        pre=0,suf=0;

        for(int j = 0;j<m;j++){
            int x = 0,pre=0,suf=0;
            for(int k = 0;k<s[j].size();k++){
                if(s[j][k]!=vp[i][k]){



                    x=1;
                    break;
                }
            }

            if(x==0){
                pre = 1;
            }

            x = 0;
            int z=n-1;
                for(int k = s[j].size()-1;k>=0;k--){

                if(s[j][k]!=vp[i][z]){

                    x = 1;
                    break;
                }
                z--;
                }

            if(x==0){
                suf = 1;
            }

           if(pre==0 && suf==0){

            mp.clear();
            break;
           }
           else if(pre==1 && suf==1){
            mp[s[j]]=3;
           }
           else if(pre==1 && suf==0){
            mp[s[j]]=1;
           }
           else if(pre==0 && suf==1){
            mp[s[j]]=2;
           }

           if(j==m-1){
                pre=0,suf=0;
                int duel=0;
                vector<string>dl;

                for(int k = 0;k<m;k++){
                    if(mp[s[k]]==1){
                        pre++;
                        mpf[k] = 1;
                        //cout<<"pre   "<<s[k]<<endl;
                    }
                    else if(mp[s[k]]==2){
                        suf++;
                        mpf[k] = 2;
                        //cout<<"suf   "<<s[k]<<endl;
                    }
                    else{
                        duel++;
                        dl.pb(s[k]);
                        //cout<<"duel   "<<s[k]<<endl;
                    }
                }


                vector<string>vpp,vss;

                for(int i = 0;i<dl.size();i++){
                    if(i%2==0){
                        vpp.pb(dl[i]);
                    }
                    else{
                        vss.pb(dl[i]);
                    }
                }

                int xx = m/2-pre;

                //cout<<pre<<endl;
                z = 0;
                if(xx!=0){
                        int cc = 0;
                    for(int k = 0;k<m;k++){


                        if(mpf[k]==0 && vpp[z]==s[k]){
                            mpf[k] = 1;
                            cc++;
                            z++;
                        }
                        if(cc>=xx)
                            break;
                    }
                }




                xx = m/2-suf;
                z = 0;
                if(xx!=0){
                        int cc = 0;
                    for(int k = 0;k<m;k++){
                        if(mpf[k]==0 && vss[z]==s[k]){
                            mpf[k] = 2;
                            cc++;
                            z++;
                        }

                        if(cc>=xx)
                            break;
                    }
                }

                for(int k = 0;k<m;k++){
                    if(mpf[k]==1){
                        cout<<'P';
                    }
                    else{
                        cout<<'S';
                    }
                }

                cout<<endl;
                //cout<<vp[i]<<endl;
                return 0;


           }

        }
    }















    for(int i = 0;i<vs.size();i++){
            //cout<<"fsd\n";
        pre=0,suf=0;


        for(int j = 0;j<m;j++){
            int x = 0,pre=0,suf=0;
            for(int k = 0;k<s[j].size();k++){
                if(s[j][k]!=vp[i][k]){
                    pre=0;
                    x=1;
                    break;
                }
            }

            if(x==0){
                pre = 1;
            }

            x = 0;
            int z = n-1;
                for(int k = s[j].size()-1;k>=0;k--){
                if(s[j][k]!=vp[i][z]){
                    x = 1;
                    break;
                }
                z--;
                }

            if(x==1){
                suf = 1;
            }

           if(pre==0 && suf==0){
            //cout<<vp[i]<<endl;
            mp.clear();
            break;
           }
           else if(pre==1 && suf==1){
            mp[s[j]]=3;
           }
           else if(pre==1){
            mp[s[j]]=1;
           }
           else{
            mp[s[j]]=2;
           }

           if(j==m-1){
                pre=0,suf=0;
                int duel=0;
                vector<string>dl;

                for(int k = 0;k<m;k++){
                    if(mp[s[k]]==1){
                        pre++;
                        mpf[k] = 1;
                    }
                    else if(mp[s[k]]==2){
                        suf++;
                        mpf[k] = 2;
                    }
                    else{
                        duel++;
                        dl.pb(s[k]);
                    }
                }

                vector<string>vpp,vss;

                for(int i = 0;i<dl.size();i++){
                    if(i%2==0){
                        vss.pb(dl[i]);
                    }
                    else{
                        vpp.pb(dl[i]);
                    }
                }

                int xx = (n/2)-pre;
                z = 0;
                if(xx!=0){
                        int cc = 0;
                    for(int k = 0;k<m;k++){
                        if(mpf[k]==0 && vpp[z]==s[k]){
                            mpf[k] = 1;
                            cc++;
                            z++;
                        }

                        if(cc>=xx)
                            break;
                    }
                }


                 xx = (n/2)-suf;
                z = 0;
                if(xx!=0){
                        int cc = 0;
                    for(int k = 0;k<m;k++){
                        if(mpf[k]==0 && vpp[z]==s[k]){
                            mpf[k] = 2;
                            cc++;
                            z++;
                        }

                        if(cc>=xx)
                            break;
                    }
                }

                for(int k = 0;k<m;k++){
                    if(mpf[k]==1){
                        cout<<'P';
                    }
                    else{
                        cout<<'S';
                    }
                }

                cout<<endl;
                return 0;


           }

        }
    }












}
