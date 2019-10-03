#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    string s,p,q;

    vector<string> v,vip,c,cip;

    for(int i = 0;i<n;i++){
        cin>>s;
        v.push_back(s);

        cin>>s;
        vip.push_back(s);
    }

    for(int i=0;i<m;i++){
        cin>>p;

        cin>>q;

        int l = q.size();

        for(int j = 0;j<n;j++){
            int x =0;

            for(int k = 0;k<l-1;k++){
                if(q[k]!=vip[j][k]){
                    x = 1;
                    break;
                }
            }

            if(x==0){
                cout<<p<<" "<<q<<" "<<"#"<<v[j]<<endl;
                break;
            }
        }


    }

}
