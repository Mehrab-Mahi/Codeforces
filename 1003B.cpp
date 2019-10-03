#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int a,b,x,c=0;
    vector<int> v;
    cin>>a>>b>>x;

    if(x==1){
        for(int i = 0;i<a;i++)
            cout<<0;

        for(int i = 0;i<b;i++)
            cout<<1;

            cout<<endl;
    }
    else if(a>b){
        if(x%2==0){
            for(int i = 0 ;i<x;i++){
                if(i%2)
                    v.pb(1);
                else
                    v.pb(0);
            }
            //cout<<a-(x/2)-1<<endl;
            if(b-(x/2)>0){
                for(int i = 0;i<b-(x/2);i++){
                    v.insert(v.begin()+1,1);
                }
            }
            if(a-(x/2)>0){
                for(int i = 0 ; i<a-(x/2)-1 ; i++)
                    v.insert(v.begin(),0);
                    //cout<<v[1]<<endl;
            }


            v.pb(0);

        }
        else{
            int p = x/2;
            for(int i = 0; i<x;i++){
                if(i%2)
                    v.pb(1);
                else
                    v.pb(0);
            }

            //cout<<v[0]<<v[1]<<v[2]<<endl;

            if(a-(p+1)>0){
                for(int i = 0 ; i<a-(p+1);i++){
                    v.insert(v.begin()+0,0);
                }
            }

            if(b-(p)>0){
                for(int i = 0 ; i<b-(p);i++){
                    v.insert(v.begin()+0,1);
                }
            }



    }


    }

    else{
        if(x%2==0){
            for(int i = 0 ;i<x;i++){
                if(i%2)
                    v.pb(0);
                else
                    v.pb(1);
            }

            if(a-(x/2)>0){
                for(int i = 0;i<a-(x/2);i++){
                    v.insert(v.end(),0);
                }
            }
            if(b-(x/2)>0){
                for(int i = 0 ; i<b-(x/2)-1 ; i++)
                    v.insert(v.begin()+0,1);
            }

            v.pb(1);
        }
        else{
            int p = x/2;
            for(int i = 0; i<x;i++){
                if(i%2==1)
                    v.pb(0);
                else
                    v.pb(1);
            }

            //cout<<v[0]<<v[1]<<v[2]<<endl;

            if(b-(p+1)>0){
                for(int i = 0 ; i<b-(p+1);i++){
                    v.insert(v.begin()+0,1);
                }
            }

            if(a-(p)>0){
                for(int i = 0 ; i<a-(p);i++){
                    v.insert(v.end(),0);
                }
            }


    }

    }

    for(int i = 0 ;i <v.size();i++){
        cout<<v[i];
    }
    cout<<endl;

}

