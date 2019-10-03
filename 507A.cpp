#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k;

    cin>>n>>k;

    int a[n],b[n];

    vector<int>v[101],t;

    for(int i = 0; i<n ; i++){
        cin>>a[i];
        b[i] = a[i];
        v[a[i]].pb(i);
    }

    sort(a,a+n);
    int s = 0;
    for(int i = 0;i<n;i++){
        if((s+a[i])>k)
            break;
        else{
            s = s + a[i];
            t.pb(v[a[i]][0]+1);
            v[a[i]].erase(v[a[i]].begin()+0);
        }
        //cout<<k<<" "<<s<<endl;
        if(s==k)
            break;
    }

    if(t.size()==0)
        cout<<0<<endl;
    else{
        cout<<t.size()<<endl;
        sort(t.begin(),t.end());

        cout<<t[0];

        if(t.size()>1){
            for(int i = 1; i<t.size() ;i++)
                cout<<" "<<t[i];
        }
        cout<<endl;
    }

}
