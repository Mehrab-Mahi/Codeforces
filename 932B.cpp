#include<bits/stdc++.h>

using namespace std;
int a[1000001],val[10][10000001];

int rec(int n,int k,int j){

                int l=0,c;
                c = n;
                n=1;
                while(c){
                    if((c%10)!=0)
                        n = n*(c%10);
                    c = c/10;
                    l++;
                }
                if(l==1){
                    a[j]=n;
                    return 0;
                }
                else
                    rec(n,k,j);

}

int main()
{
    int t,l,r,k,temp;

        for(int j = 1;j<=1000000;j++){
            int s = j;
            rec(s,k,j);
        }
    scanf("%d",&t);

    for(int i = 0;i<t;i++){
        scanf("%d %d %d",&l,&r,&k);

        int sum=0;

        for(int j = l;j<=r;j++){
            if(a[j]==k)
                sum++;
        }
            printf("%d\n",sum);
    }
}
