#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;

    cin>>k;
    int sum = 0,c=0,a;
    for(int i=19;i<=1000000000;i++){
        a = i;
        sum = 0;
        while(a){

            sum = sum + (a%10);
            a = a/10;

        }

        //cout<<sum<<endl;

        if(sum==10)
            c++;

        if(c==k)
        {
            cout<<i<<endl;
            break;
        }
    }
}
