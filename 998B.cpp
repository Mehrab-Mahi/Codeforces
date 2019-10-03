#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    vector<int>v;

    int n,b,s=0,o=0,e=0,cut=0,cutt=0,c=0;

    cin>>n>>b;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i = 0; i<n;i++){
        if(a[i]%2==1)
            o++;
        else
            e++;

        if(o==e && i+1<n){
            int d = abs(a[i+1]-a[i]);

            if(i+1<n){

               v.pb(d);
            }
        }
    }

    sort(v.begin(),v.end());
    //cout<<v.size()<<endl;
    for(int i = 0;i<v.size();i++){
        //cout<<s+v[i]<<" "<<b<<endl;
        if(s+v[i]<=b){
            cut++;
            s = s + v[i];
        }
        else
            break;
    }

    cout<<cut<<endl;

}
