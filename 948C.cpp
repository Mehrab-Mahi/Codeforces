#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,a,step=1,i,j;

    scanf("%d",&n);

    vector<int> v;

    int t;

    for( i =0;i<n;i++){
        scanf("%d",&a);

        v.pb(a);
    }


        scanf("%d",&t);

    if(v[0]>t){
        printf("%d",t);
        v[0] = v[0] - t;
    }
    else
    {
        printf("%d",v[0]);

        v.erase(v.begin()+0);
        step--;
    }

    int s;
   if(n>1){
      for( i = 1;i<n;i++){
            scanf("%d",&t);
            step++;
            s = 0;
        for( j = 0;j<step;j++){
            if(v[j]>t){
                s =s + t;
                v[j] = v[j] - t;
            }
            else{
                s = s + v[j];

                v.erase(v.begin()+j);
                j--;
                step--;
            }
        }
        printf(" %d",s);
      }
   }

    printf("\n");

    return 0;

}

