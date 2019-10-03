#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int pos[1005];

int main()
{
    int n,x=0,t=1,y;
    string s;

    cin>>n;
    y = n;
    vector<char>v[1005];

    while(n--){
        cin>>s;

        int a[125];

        memset(a,0,sizeof(a));

        for(int  i = 0;i<s.size();i++){
            a[s[i]] = 1;
        }

        for(int i = 97;i<123;i++){
            if(a[i]!=0){
                char p = i;

                v[x].pb(p);
            }
        }

        sort(v[x].begin(),v[x].end());

        x++;
    }

   /* for(int i = 0;i<y;i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j];
        } cout<<endl;
    }  */

    if(y>1){
        t = 0;
    for(int i = 0;i<y;i++){

        if(pos[i]==0){
            //cout<<i<<" ";
            t++;
        if(i+1<y){
        for(int j = i+1;j<y;j++){

            if(v[i]==v[j]){
                pos[j] = 1;
            }
        } }
    }
    }
    }
   // cout<<endl;
    cout<<t<<endl;
}
