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

    int a[n],b[n],c[n],d[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
        c[i] = a[i];
        cin>>b[i];
        d[i] = b[i];
    }

    sort(c,c+n);
    sort(d,d+n);



    //for(int i = 0;i<2*n;i++)
      //  cout<<c[i]<<endl;

    int m = min(c[0],d[0]);

    m = sqrt(m)+1;

    int k = 2,x = 0;

    while(1){
        x = 0;

    for(int i = 0;i<n;i++){
        if(a[i]%k==0 || b[i]%k==0)
            x = 1;
        else{
            x = 0;
            break;
        }
    }

        if(x==1){
            cout<<k<<endl;
            return 0;
        }


        k++;

        if(k>m){
            cout<<-1<<endl;
            return 0;
        }
    }

}
