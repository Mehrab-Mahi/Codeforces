#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,x;

    double n,m;

    cin>>t;

    while(t--){
        cin>>n;

            if(n==1 || n==2 || n==3)
                printf("N\n");
            else{

            m = (n+sqrt(n*n-4*n))/(2);

            printf("Y %.9f %.9f\n",m,n-m);

            }



    }

}
