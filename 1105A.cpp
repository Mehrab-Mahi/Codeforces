#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,t,ss=100000000;

    cin>>n;

    int a[n];

    for(int i = 0; i<n ; i++)
        cin>>a[i];

    sort(a,a+n);

    if(n==1){
        cout<<a[0]<<" "<<0<<endl;
    }
    else{
        int l = a[0],h = a[n-1];

        for(int i = l;i<=h;i++){

            int s = 0;

            for(int j = 0;j<n;j++){
                if(abs(a[j]-i)<=1)
                    s+=0;
                else{
                    s+=min(abs(a[j]-(i+1)),abs(a[j]-(i-1)));
                }
            }

            if(s<ss){
                ss = s;
                t = i;
            }

        }

    cout<<t<<" "<<ss<<endl;
    }


}
