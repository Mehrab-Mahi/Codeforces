#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,s,p=0;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]+a[k]==a[i]){
                    if(a[j]>a[k]){
                        b=j;
                        s=k;
                    }
                    else{
                        b=k;
                        s=j;
                    }

                    cout<<i+1<<" "<<b+1<<" "<<s+1<<endl;
                    p=1;
                    break;

                }
            }
            if(p==1)
                break;
        }
        if(p==1)
            break;
    }

    if(p==0)
        cout<<-1<<endl;
}
