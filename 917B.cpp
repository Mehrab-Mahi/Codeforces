#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c=0;

    scanf("%d",&n);

    int a[n],b[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }

    sort(b,b+n);

    m=0;
    while(1){
    for(int i=n-1;i>=0;i--){
        if(b[i]!=0){
            m++;
            for(int j=i-1;j>=0;j--){
                if(b[i]>b[j])
                    b[j]=0;
            }
            b[i]=0;
        }
    }

    while(1){
    if(m%2==0)
        printf("Agasa");
    else
        printf("Conan");

        break;
    }
     if(c==0)
        break;
    }
}
