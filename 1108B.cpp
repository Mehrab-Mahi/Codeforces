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

    int a[n];

    for(int i = 0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    int x=-1,m,y = a[n-1];

    vector<int>v,vv,vvv;

    for(int i = 0;i<n;i++){
        if(a[i]==a[i+1] && i+1<n)
        {
            vvv.pb(a[i]);
            i++;
        }
        else
            v.pb(a[i]);

    }
    if(vvv.size()!=0){
        sort(vvv.begin(),vvv.end());

        v.pb(vvv[vvv.size()-1]);
    }
    int k = v.size();
    sort(v.begin(),v.end());

    for(int i = 0;i<v.size()-1;i++){
        if(y%v[i]!=0)
            vv.pb(v[i]);
    }

    if(vv.size()==0)
        cout<<v[0]<<" "<<y<<endl;
    else{
        sort(vv.begin(),vv.end());

        k = vv.size();

        cout<<vv[k-1]<<" "<<y<<endl;
    }




}
