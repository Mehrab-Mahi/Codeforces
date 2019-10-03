#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;


    int n,l=100000000;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i = 0;i<n;i++){
            ll s = 0,ss=0;
        for(int j = 0;j<n;j++){
            ss = abs(i - j);

            if(ss==0)
                s=s+((j*2)*2)*a[j];
            else
                s = s + ((ss+j+i)*2)*a[j];



        }
            if(s<l)
                l = s;

                //cout<<i+1<<"  "<<s<<endl;
    }

    cout<<l<<endl;

}
