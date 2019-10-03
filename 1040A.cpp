#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,aa,bb,k,s=0;

    cin>>n>>aa>>bb;

    int a[n];

    for(int i = 0;i<n;i++)
        cin>>a[i];

    if(n==1){
        if(a[0]!=2){
            cout<<0<<endl;
            return 0;
        }
        else{
            if(aa>bb)
                cout<<bb<<endl;
            else{
                cout<<aa<<endl;
            }
            return 0;
        }
    }
    if(n%2==0){
        k = n-1;
        for(int i = 0;i<n/2;i++){
            if(a[i]==a[k] && (a[k]==2)){
                if(aa>bb)
                    s = s+(2*bb);
                else
                    s = s+(2*aa);
            }
            else if(a[i]!=a[k] && (a[k]==2 || a[i]==2)){
                if(a[i]==1 && a[k]==2)
                    s = s + bb;
                else if(a[i]==0 && a[k]==2)
                    s = s+aa;
                else if(a[k]==1 && a[i]==2)
                    s = s + bb;
                else
                    s = s+aa;
            }
            else if(a[i]!=a[k] && a[k]!=2 && a[i]!=2){
                cout<<-1<<endl;
                return 0;
            }

            k--;
        }
    }
    else if(n%2==1){
        k = n-1;
        for(int i = 0;i<n/2;i++){
            if(a[i]==a[k] && (a[k]==2)){
                if(aa>bb)
                    s = s+ (2*bb);
                else
                    s = s+(2*aa);
            }
            else if(a[i]!=a[k] && (a[k]==2 || a[i]==2)){
                if(a[i]==1 && a[k]==2)
                    s = s + bb;
                else if(a[i]==0 && a[k]==2)
                    s = s+aa;
                else if(a[k]==1 && a[i]==2)
                    s = s + bb;
                else
                    s = s+aa;
            }
            else if(a[i]!=a[k] && a[k]!=2 && a[i]!=2){
                cout<<-1<<endl;
                return 0;
            }

            k--;
        }

        if(a[k]==2){
            if(aa>bb)
                s = s + bb;
            else
                s= s + aa;

        }
    }

    cout<<s<<endl;

}
