#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int h1,a1,c1,h2,a2,c=1;

    cin>>h1>>a1>>c1>>h2>>a2;

    vector<int>v;

    while(1){
        if(c%2==1){
            if(h1-a2<=0 && h2-a1>0){
                v.pb(0);
                h1=h1+c1;
            }
            else{
                v.pb(1);
                h2=h2-a1;

                if(h2<=0)
                    break;
            }

        }
        else{
            h1=h1-a2;
        }

        c++;
    }

    cout<<v.size()<<endl;

    for(int i = 0;i<v.size();i++){
        if(v[i]==1)
            cout<<"STRIKE"<<endl;
        else
            cout<<"HEAL"<<endl;
    }

}
