#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int ans[6]={0},x;
    vector<int>v;
    v.pb(4);
    v.pb(8);
    v.pb(15);
    v.pb(16);
    v.pb(23);
    v.pb(42);

    cout<<"? 1 1"<<endl;
    fflush(stdout);
    cin>>x;

    ans[0] = sqrt(x);

    for(int i = 0;i<6;i++){
        if(v[i]==sqrt(x)){
            v.erase(v.begin()+i);
            break;
        }
    }

    cout<<"? 2 2"<<endl;
    fflush(stdout);
    cin>>x;

    ans[1] = sqrt(x);

    for(int i = 0;i<5;i++){
        if(v[i]==sqrt(x)){
            v.erase(v.begin()+i);
            break;
        }
    }

    cout<<"? 3 4"<<endl;
    fflush(stdout);
    cin>>x;

    int y;
    cout<<"? 4 5"<<endl;
    fflush(stdout);
    cin>>y;
    int p,q,pp,qq;
    for(int i = 0;i<v.size();i++){
        for(int j = i+1 ; j<4;j++){
            if(v[i]*v[j]==x){
                p = v[i];
                q = v[j];

                break;
            }
        }
    }

    for(int i = 0;i<v.size();i++){
        for(int j = i+1 ; j<4;j++){
            if(v[i]*v[j]==y){
                pp = v[i];
                qq = v[j];

                break;
            }
        }
    }

    if(p==pp){
        ans[2]=q;
        ans[3] = p;
        ans[4] = qq;

        for(int i = 0;i<v.size();i++){
            if(v[i]==p){
                v.erase(v.begin()+i);
                break;
            }
        }

        for(int i = 0;i<v.size();i++){
            if(v[i]==q){
                v.erase(v.begin()+i);
                break;
            }
        }

        for(int i = 0;i<v.size();i++){
            if(v[i]==qq){
                v.erase(v.begin()+i);
                break;
            }
        }
    }
    else if(p==qq){
        ans[2]=q;
        ans[3] = p;
        ans[4] = pp;

        for(int i = 0;i<v.size();i++){
            if(v[i]==p){
                v.erase(v.begin()+i);
                break;
            }
        }

        for(int i = 0;i<v.size();i++){
            if(v[i]==q){
                v.erase(v.begin()+i);
                break;
            }
        }

        for(int i = 0;i<v.size();i++){
            if(v[i]==pp){
                v.erase(v.begin()+i);
                break;
            }
        }
    }
    else if(q==pp){
        ans[2]=p;
        ans[3] = q;
        ans[4] = qq;

        for(int i = 0;i<v.size();i++){
            if(v[i]==p){
                v.erase(v.begin()+i);
                break;
            }
        }

        for(int i = 0;i<v.size();i++){
            if(v[i]==q){
                v.erase(v.begin()+i);
                break;
            }
        }

        for(int i = 0;i<v.size();i++){
            if(v[i]==qq){
                v.erase(v.begin()+i);
                break;
            }
        }
    }
    else if(q==qq){
        ans[2]=p;
        ans[3] = q;
        ans[4] = pp;

        for(int i = 0;i<v.size();i++){
            if(v[i]==p){
                v.erase(v.begin()+i);
                break;
            }
        }

        for(int i = 0;i<v.size();i++){
            if(v[i]==q){
                v.erase(v.begin()+i);
                break;
            }
        }

        for(int i = 0;i<v.size();i++){
            if(v[i]==pp){
                v.erase(v.begin()+i);
                break;
            }
        }
    }

    ans[5] = v[0];

    cout<<"! ";

    for(int i=0;i<6;i++){
        if(i==0){
            cout<<ans[i];
        }
        else
            cout<<" "<<ans[i];
    }

    cout<<endl;

}
