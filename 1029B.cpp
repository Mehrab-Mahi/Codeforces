#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m=1,mm=1;

    cin>>n;

    int a[n];

    cin>>a[0];

    if(n>1){
        for(int i = 1 ; i<n ; i++){
            cin>>a[i];

            if((2*a[i-1])>=a[i])
                m++;
            else{
                //cout<<a[i]<<endl;
                if(m>mm)
                    mm = m;

                m =1;
            }
        }
    }

    if(m>mm)
        mm = m;

    cout<<mm<<endl;

}

