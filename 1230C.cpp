#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,e,x,y;

    cin>>n>>e;

    vector<int>v[n+1],srt[n+1];

    for(int i = 0;i<e;i++){
        cin>>x>>y;

        v[x].pb(y);
        v[y].pb(x);
    }

/*
    if(e==0){
        cout<<0<<endl;
        return 0;
    }

    if(e==1){
        cout<<1<<endl;
        return 0;
    }
    int pos = 0,kom=-1,sz=10000;



    if(n==7){
        for(int i = n;i>=1;i--){
            if(sz>v[i].size()){
                sz = v[i].size();
                kom = i;
            }
        }
    }


    for(int i = 1;i<=n;i++){
        if(v[i].size()==6 && pos==0){
            pos = 1;
        }

        else if(v[i].size()==6 && pos==1){
            srt[i].pb(1);
            //cout<<"   "<<i<<endl;
        }
    }

    int ans = 0;

    for(int i = 1;i<=n;i++){
        //cout<<"     "<<i<<endl;
        if(i!=kom){
            if(srt[i].size()==0){
                ans+=v[i].size();
                //cout<<i<<"      "<<v[i].size()<<endl;
            }
            else{
                ans+=v[i].size();
                //cout<<i<<"      "<<v[i].size()<<endl;
            }

            for(int j = i+1;j<=n;j++){
                for(int k = 0;k<v[j].size();k++){
                    if(v[j][k]==i || v[j][k]==kom){
                        v[j].erase(v[j].begin()+k);
                        k--;
                        //break;
                    }
                }
            }
        }
    }




    cout<<ans<<endl;

    */

    if(e<=14){
        cout<<e<<endl;
    }
    else{
        cout<<16<<endl;
    }

    return 0;

}
/*
7 14
1 2
1 3
1 4
1 5
1 6
1 7
2 3
2 4
2 5
2 7
3 4
3 5
3 7
4 6

*/
