#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n];

    int mx = 1,f = 1,i,j;

    for(i = 0;i<n;i++)cin>>a[i];

    for(int i=0;i<n; ){

        f = 1;

        if(i+1<n && (a[i]<a[i+1])){
            f++;

            if(i+1==n-1){
                if(f>mx)
                    mx = f;
                    i = j;
                break;
            }

            for(j = i+1 ; j<n-1;j++){

                if(a[j]<a[j+1]){
                    f++;

                    if(j+1==n-1){
                        if(f>mx)
                            mx = f;
                            i = j+1;
                        break;
                    }
                }
                else{
                    if(f>mx)
                        mx = f;
                        i = j+1;
                        break;
                }
            }
        }
        else
            i++;

        if(i==n-1)
            break;
    }

    cout<<mx<<endl;

}
