#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int aa[101];

int main()
{
    optimize;

    int n;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];

        aa[a[i]]++;
    }

    int s = 0,k=0;

    for(int i = 1;i<=100;i++){
        if(aa[i]==1)
            s++;
    }

    if(s%2==1){
        cout<<"NO\n";
        return 0;
    }
    else{
        cout<<"YES\n";

        for(int i = 0;i<n;i++){
            if(aa[a[i]]==1){
                if(k%2==0)
                    cout<<"B";
                else
                    cout<<"A";

                k++;
            }
            else
                cout<<"B";
        }
        cout<<endl;
    }

}
