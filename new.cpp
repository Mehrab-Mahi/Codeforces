#include<stdio.h>

int main()
{
    int n,mm;

    char s[12];

    scanf("%d",&n);


    while(n--){


        scanf("%s",&s);



    int d=0,m=0,y=0,day=0,month=0,year=0,sp;
    mm=0;
    for(int i = 11;i>=0;i--){
        if(s[i]==47 && mm==0){
            sp=i;
            mm=1;
        }
    }

    sp = sp+4;


    int c = 0,cc=0;

    mm=0;
    for(int i = sp;i>=0 ;i--){
        cc = 1;
        if(s[i]==47 && mm==0){
            sp=i-1;
            mm=1;
        }
        if(c==0 && mm==0)
            y +=s[i]-48;
        else if(mm==0){
            for(int j = 0;j<c;j++)
                cc*=10;

            y+=(s[i]-48)*cc;
        }

        if(mm==0)
            c++;
    }



     c = 0,cc=0;

    mm=0;
    for(int i = sp;i>=0 ;i--){
        cc = 1;
        if(s[i]==47 && mm==0){
            sp=i-1;
            mm=1;
        }
        if(c==0 && mm==0)
            m +=s[i]-48;
        else if(mm==0){
            for(int j = 0;j<c;j++)
                cc*=10;

            m+=(s[i]-48)*cc;
        }

        if(mm==0)
            c++;
    }

     c = 0,cc=0;


    for(int i = sp;i>=0 ;i--){
        cc = 1;

        if(c==0)
            d +=s[i]-48;
        else{
            for(int j = 0;j<c;j++)
                cc*=10;

            d+=(s[i]-48)*cc;
        }

        c++;
    }

    if(y==1971)
        printf("%d\n",d-16);
    else{
        if(d>=16 && m==12){
            year = y - 1971;

            printf("%d\n",(year*365)+d-16);
        }
        else{
            year = y - 1971 - 1;

            for(int i = 1;i<=m;i++){
                if(i==1 && i!=m){
                    month = month + 31;
                }
                else if(i==2 && i!=m){
                    month = month + 28;
                }
                else if(i==3 && i!=m){
                    month = month + 31;
                }
                else if(i==4 && i!=m){
                    month = month + 30;
                }
                else if(i==5 && i!=m){
                    month = month + 31;
                }
                else if(i==6 && i!=m){
                    month = month + 30;
                }
                else if(i==7&& i!=m){
                    month = month + 31;
                }
                else if(i==8 && i!=m){
                    month = month + 31;
                }
                else if(i==9 && i!=m){
                    month = month + 30;
                }
                else if(i==10 && i!=m)
                    month = month + 31;
                else if(i==11 && i!=m)
                    month = month + 30;
                else if(i==12 && i!=m)
                    month = month + 31;
            }

            month +=d+15;

            printf("%d\n",(year*365)+month);
        }
    }



    }


}

