#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    float bun,s,t;
    int tm,oh;
    int hh,mm,h,d,c,n;

    cin>>hh>>mm>>h>>d>>c>>n;

    if(hh>=20){
        if(h%n==0)
            bun = h/n;
        else
            bun = h/n + 1;
        //cout<<bun*c*0.8<<endl;

        printf("%.4f",bun*c*0.8);
    }
    else{
        tm = (60-mm);
        tm = tm +(20 - (hh+1))*60;

        oh =h + d*tm;

        if(oh%n==0)
            bun = oh/n;
        else
            bun = oh/n + 1;

        s = (float)bun*c*0.8;

        if(h%n==0)
            bun = h/n;
        else
            bun = h/n + 1;

        t =(float) bun*c;



        if(s>t){
            printf("%.4f\n",t);
           // cout<<t<<endl;
        }
        else{
            printf("%.4f\n",s);
            //cout<<s<<endl;
        }
    }
}

