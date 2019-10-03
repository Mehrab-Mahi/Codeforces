#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int x[3000];

int main()
{
    optimize;

    int n,k,s = 0;

    cin>>n>>k;

    int a[n],b[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b,b+n);

    vector<int>v;
    int p = n-1,c =0;
    while(1){
        c++;
        s = s + b[p];
        for(int i = 0;i<n;i++){

            if(a[i]==b[p] && x[i]==0){
                x[i]=1;
                v.pb(i+1);
                break;
            }
        }

        if(c==k){
            break;
        }

        p--;
    }

    sort(v.begin(),v.end());

    cout<<s<<endl;

    for(int i = 0;i<v.size();i++){
        if(i==0 && i==v.size()-1)
            cout<<n;
        else if(i==0)
            cout<<v[i];
        else if(i==v.size()-1)
            cout<<" "<<n-v[i-1];
        else
            cout<<" "<<v[i]-v[i-1];
    }
    cout<<endl;


}

