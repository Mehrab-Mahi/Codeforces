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

    int a[n],ans=0;;

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    int x=0;

    vector<int>v;

    for(int i=0;i<n;i++){
        if(a[i]==1){
            //cout<<" "<<i<<endl;
            x=1;

            if(i+1<n){
            for(int j = i+1;j<n;j++){
                if(a[j]==1 && j<n-1)
                    x++;
                else if(a[j]==1 && j==n-1){
                    x++;
                    i = j;
                    v.pb(x);
                }
                else{
                    i = j-1;
                    v.pb(x);
                    break;
                }
            }}
            else{
                v.pb(x);
            }
        }
        else{

            x=1;
            if(i+1<n){
            for(int j = i+1;j<n;j++){
                if(a[j]==2 && j<n-1)
                    x++;
                else if(a[j]==2 && j==n-1){
                    x++;
                    i = j;
                    v.pb(x);
                }
                else{
                    i = j-1;
                    v.pb(x);
                    //cout<<"fd\n";
                    break;
                }
            }}
            else
                v.pb(x);
        }
    }

    //cout<<"  "<<v.size()<<endl;

    for(int i = 0; i<v.size();i++){
        if(i+1<v.size()){
            ans = max(ans,2*min(v[i],v[i+1]));
        }
    }

    cout<<ans<<endl;

}
