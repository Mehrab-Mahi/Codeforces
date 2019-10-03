#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int x1,y1,x2,y2,n;
    string s;
    cin>>x1>>y1>>x2>>y2>>n;
    cin>>s;
    int u=0,d=0,l=0,r=0;
    int len = abs(x1-x2)+abs(y1-y2);

    if(n>len)
        len = n;

    if(x1>x2)
        l=x1-x2;
    else if(x1<x2)
        r=x2-x1;

    if(y1>y2)
        d=y1-y2;
    else if(y1<y2)
        u=y2-y1;

    int x= x1,y=y1,c=0,z=0,cc=0,i=0;

    while(cc<=len){
        if(s[i]=='U'){
                z=0;
            if(u!=0){
                if(y<y2){
                    y++;
                    z=1;
                }

                if(r!=0 && x<x2 && z==1)
                    x++;
                else if(l!=0 && x>x2 && z==1)
                    x--;
                else if(y<y2 && z==1)
                    y++;

                c++;
            }
            else
                c++;
        }
        else if(s[i]=='D'){
                z=0;
            if(d!=0){
                if(y>y2){
                    y--;
                    z=1;
                }

                if(r!=0 && x<x2 && z==1)
                    x++;
                else if(l!=0 && x>x2 && z==1)
                    x--;
                else if(y>y2 && z==1)
                    y--;

                c++;
            }
            else
                c++;
        }
        else if(s[i]=='R'){
                z=0;
            if(r!=0){
                if(x<x2){
                    x++;
                    z=1;
                }

                if(u!=0 && y2>y && z==1)
                    y++;
                else if(d!=0 && y2<y && z==1)
                    y--;
                else if(x<x2 && z==1)
                    x++;

                c++;
            }
            else
                c++;
        }
        else if(s[i]=='L'){
            z=0;
            if(l!=0){
                if(x>x2){
                    x--;
                    z=1;
                }

                if(u!=0 && y2>y && z==1)
                    y++;
                else if(d!=0 && y2<y && z==1)
                    y--;
                else if(x>x2 && z==1)
                    x--;

                c++;
            }
            else
                c++;
        }

        if(x==x2 && y==y2){
            cout<<c<<endl;
            return 0;
        }
        cc++;
        i++;




     /*   if(x>x2)
            l=x-x2;
        else if(x<x2)
            r=x2-x;

        if(y>y2)
            d=y-y2;
        else if(y<y2)
            u=y2-y;

    */
       // cout<<x<<","<<y<<endl;

        if(i>=n)
            i=0;
    }


    cout<<-1<<endl;

}
