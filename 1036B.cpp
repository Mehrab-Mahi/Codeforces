#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll q,n,m,k,d,dd;

    cin>>q;

    while(q--){
        cin>>n>>m>>k;

        if(n==m){
            if(k<m){
                cout<<-1<<endl;
            }
            else if(k==m){
                cout<<k<<endl;
            }
            else if(k>m){
                d = k-m;
                if(d%2==0){
                    cout<<k<<endl;
                }
                else{
                    cout<<k-2<<endl;
                }
            }
        }
        else if(n>m){
            dd = n-m;
            if(k<n){
                cout<<-1<<endl;
            }
            else if(k==n){
                if(dd%2==0)
                    cout<<k<<endl;
                else
                    cout<<k-1<<endl;
            }
            else if(k>n){
                d = k-n;

                if(dd%2==0){
                    if(d%2==0)
                        cout<<k<<endl;
                    else
                        cout<<k-2<<endl;
                }
                else{
                    cout<<k-1<<endl;
                }
            }

        }
        else if(n<m){
            dd = m-n;

            if(k<m){
                cout<<-1<<endl;
            }
            else if(k==m){
                if(dd%2==0)
                    cout<<k<<endl;
                else
                    cout<<k-1<<endl;
            }
            else if(k>m){
                d = k-m;

                if(dd%2==1){
                    cout<<k-1<<endl;
                }
                else{
                    if(d%2==0)
                        cout<<k<<endl;
                    else
                        cout<<k-2<<endl;
                }
            }
        }
    }

}
