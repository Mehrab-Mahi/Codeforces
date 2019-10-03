#include<bits/stdc++.h>

using namespace std;

int a[100001];


int main()
{
    for(int i = 0;i<=100000;i++){
    while(1){
        int l=0,c,n;
                c = i;
                n=1;

                while(c){
                    if((c%10)!=0)
                        n = n*(c%10);
                    c = c/10;
                    l++;
                }

                if(l==1){
                    a[i] = n;
                }
    }
    }
    int t,l,r,k,temp;

     scanf("%d",&t);

    for(int i = 0;i<t;i++){
        scanf("%d %d %d",&l,&r,&k);
        int sum = 0;
        if(l>r){
            temp = l;
            l = r;
            r = temp;
        }

        for(int j = l;j<=r;j++){
            if(a[j]==k)
                sum++;
        }

        printf("%d\n",sum);
    }



}
