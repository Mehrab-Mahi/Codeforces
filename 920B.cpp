#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t){

        int n;

        cin>>n;

        int a[n],b[n];

        for(int i = 0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        cout<<1;
        int p=1;
        for(int i = 1;i<n;i++){
            if(b[i]<=p)
                cout<<" "<<0;
            else
            {
                p++;

                cout<<" "<<p;
            }
        }

        cout<<endl;


        t--;
    }
}
