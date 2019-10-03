#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,x;
    double k,avg=0,s = 0;

    cin>>n>>k;

    double a[n];

    for(int i = 0 ; i<n ; i++)
        cin>>a[i];

    for(int i = 0;i<=n-k;i++){

        s = 0;
        int c = 0;
        for(int j = i;j<n; j++){
            s = s + a[j];
            c++;

            if(c>=k){
                if((s/c)>avg)
                    avg = s/c;
            }
        }
    }

    printf("%.15f\n",avg);

}

