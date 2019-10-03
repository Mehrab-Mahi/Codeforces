#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,s=0;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
            cin>>a[i];
            s = s+a[i];
    }

   // sort(a,a+n);

    if(n==1)
        cout<<-1<<endl;
    else if(n==2){
        if(a[0]==a[1])
            cout<<-1<<endl;
        else
            cout<<1<<endl<<1<<endl;
    }
    else{
        vector<int>v;
        int t = 0;
        for(int i = 0;i<n;i++){
            t = t+a[i];
            v.pb(i);
            if(t!=s/2){
                cout<<v.size()<<endl;

                for(int j = 0 ; j<v.size() ; j++)
                    cout<<v[j]+1<<" ";

                cout<<endl;
                return 0;
            }
        }

        cout<<-1<<endl;
    }

}
