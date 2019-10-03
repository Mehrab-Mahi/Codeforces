#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,p = 0,b,c,d;

    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];

    if(n==2){
        cout<<"NO"<<endl;
    }
    else{
        for(int i = 0;i<n;i++){
            b = a[i];
            c = a[b-1];
            if(i!=c-1){
                d = a[c-1];
                if(i==d-1){
                    p = 1;
                    cout<<"YES"<<endl;
                    break;
                }
            }

        }

        if(p==0)
            cout<<"NO"<<endl;
    }
}

