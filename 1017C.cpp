#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,a=0;

    cin>>n;

    int k = sqrt(n),x = 0,y;

    a = n-k+1;

    cout<<a;
    x++;

    y = a+1;
    int b = n;
    while(1){
         if(x>=n)
                break;
        for(int i = y;i<=b;i++){
            cout<<" "<<i;
            x++;

            if(x>=n)
                break;
        }

         if(x>=n)
                break;

        a = a-k;
        if(a<=0)
            a=1;
        y = a;
        b = b - k;

        //cout<<"   x   "<<x<<endl;

    }

    cout<<endl;
}
