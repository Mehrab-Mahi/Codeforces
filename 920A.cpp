#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,c,f;

    cin>>t;

    while(t){

        cin>>n>>k;
        c=0;
        int m=0;
        int a[k],x=0,z=0;

        for(int i=0;i<k;i++){
            cin>>a[i];
        }

        f = 0;

        sort(a,a+k);

        int y = 0;
        for(int i = 0;i<k-1;i++){
            if(a[i]!=a[k+1])
                y++;
                break;
        }



        if(k>1){

        if(y!=0){

        for(int i=0;i<k-1;i++){

            m = a[i+1]-a[i]-1;

            if(m==1 ){
                c = c+1;
                if(c>f)
                    f = c;
            }
            else if(m==2){
                c = c+1;

                 if(c>f)
                    f = c;
            }
            else if(m%2==1){
                c = c+ (m/2)+1;
                 if(c>f)
                    f = c;
            }
            else if(m%2==0 && m!=0){
                c = c + (m/2);

                 if(c>f)
                    f = c;
            }

         // cout<<f<<endl;
        }

        if(  a[0]!=1 ){
                int p = 0;
                if((a[1]-a[0])>0)
                    x = (a[0]-1)-(a[1]-a[0]-1);
                else if((a[1]==a[0])){

                        for(int j = 1;j<k-1;j++)
                    if(j!=j+1){
                        x = (a[j+1]-a[0]-1) - (a[0]-1);
                        p = 1;
                        break;
                    }

                    if(p == 0){
                        int v = (a[0]-1)-(n-a[0]);

                        if(v<0)
                            v = v*-1;

                          x= v;
                    }

                }


        }

        if(  a[k-1]!=n ){
                int p =0;
            if((a[k-1]-a[k-2])>0)
                z = (n-a[k-1]) - (a[k-1]-a[k-2]-1) ;
            else if((a[k-1]==a[k-2])){
                    for(int j = k-2;j>=1;j--)
                    if(j!=j-1){
                        z =(n-a[k-1]) - a[j-1] ;
                        p = 1;
                        break;
                    }

                    if(p == 0){
                        int v = (n-a[k-1]) - (a[k-1]-1);

                        if(v<0)
                            v = v*-1;

                          z = v;
                    }
            }

        }
        //cout<<x<<" "<<z<<endl;
        c = c + 1;

        if(x>=z)
            c = c + x;
        else
            c = c + z;

            if(c>f)
                f = c;

        }

        else
        {
            int v = (a[0]-1) - (n-a[0]);

            if(v <0)
                v = v*-1;

            c = c + v;

             if(c>=f)
                    f = c;
        }

        }




        else{

                int p = a[0]-1;
                int q = n - a[0];

                if(p == q)
                    c = c + p+1;
                else if(p>q)
                    c = c + p + 1;
                else
                    c = c + q + 1;

                     if(c>=f)
                    f = c;



        }


        cout<<f<<endl;


        t--;
    }
}
