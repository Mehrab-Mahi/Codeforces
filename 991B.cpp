#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;

    double a[n],s=0;

    for(int i = 0; i<n ; i++){
        cin>>a[i];
        s = s+a[i];
    }

    sort(a,a+n);

    if((s/n)>=4.5)
        cout<<0<<endl;
    else{
        for(int i = 0;i<n;i++){
            if(a[i]!=5){

                double dif = 5-a[i];
                a[i] = 5;
                c++;
                s = s + dif;
                if((s/n)>=4.5){
                    cout<<c<<endl;
                    return 0;
                }

            }
        }
    }
}
