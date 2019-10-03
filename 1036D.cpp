#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,m,sn=0,sm=0;

    cin>>n;
    ll a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
        sn = sn + a[i];
    }
    cin>>m;
    ll b[m];

    for(int i = 0;i<m;i++){
        cin>>b[i];
        sm = sm + b[i];
    }

    if(sn!=sm){
        cout<<-1<<endl;
        return 0;
    }

    vector<ll>vn,vm;

        ll k = 0,s = 0,moa=0,sb=0,mob=0;
    if(n>m){
        for(int i = 0;i<n;i++){

            if(a[i]==b[k]){
                k++;
            }
            else if(a[i]!=b[k] && s==0 && sb==0){
                s = a[i];
                sb = b[k];
                k++;
                moa++;
            }
            else{
                s = s + a[i];
                moa++;
                if(s>sb){
    //cout<<s<<" "<<sb<<endl;
                    sb = sb+b[k];
                    mob++;
                    k++;
                }
                if(s==sb){

                    s = 0;
                    sb = 0;
                }

            }
        }
    }
    else{

        for(int i = 0;i<m;i++){

            if(b[i]==a[k]){
                k++;
            }
            else if(b[i]!=a[k] && s==0 && sb==0){
                s = b[i];
                sb = a[k];
                k++;
                mob++;
            }
            else{
                s = s + b[i];
                mob++;
                if(s>sb){
    //cout<<s<<" "<<sb<<endl;
                    sb = sb+a[k];
                    moa++;
                    k++;
                }
                if(s==sb){

                    s = 0;
                    sb = 0;
                }

            }
        }
    }

    cout<<n-moa<<endl;
}
