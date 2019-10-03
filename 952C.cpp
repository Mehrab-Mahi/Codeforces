#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    int m = 0;

    for(int i = 0;i<n-1;i++){
        if(abs(a[i]-a[i+1])>=2)
        {
            m = 1;
            cout<<"NO"<<endl;
            break;
        }
    }

    if(m==0)
        cout<<"YES"<<endl;
}

