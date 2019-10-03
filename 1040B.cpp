#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k,ans=0;
    cin>>n>>k;

    int x  = 2*k+1;

    if(n%x==0)
        ans = n/x;
    else
        ans = (n/x)+1;

    cout<<ans<<endl;

    vector<int>v;

    int pos = k+1;

    v.pb(pos);

    if(n<=k){
        cout<<n<<endl;
        return 0;
    }

    for(int i = 1;i<ans;i++){
        pos = pos + (2*k+1);

        if(pos<=n)
            v.pb(pos);
        else{
            int k = pos-n;
            v.pb(n);

            for(int j = v.size()-2;j>=0;j--)
                v[j] = v[j]-k;
        }
    }

    cout<<v[0];

    if(v.size()>1){
    for(int i = 1;i<v.size();i++)
        cout<<" "<<v[i];
    }

    cout<<endl;

}
