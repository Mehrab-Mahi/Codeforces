#include<bits/stdc++.h>
#define ll long long INT_MAX
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    int h,m,p=0,c=0;

    scanf("%d:%d",&h,&m);


    p = (m%10)*10;
    p = p+(m/10);

    if(h==p)
        cout<<0<<endl;
    else{


        while(1){
            c++;
            m++;

            if(m==60){
                h++;
                m=0;
            }

            if(h==24)
                h=0;

            p = 0;

            p = (m%10)*10;
            p = p+(m/10);

            if(h==p){
                cout<<c<<endl;
                return 0;
            }

        }


    }

}
