#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int c = 0,s;


    for(int i=101;i<=n;i++){
        if(i<=n-2)
        for(int j = i+1;j<=n && (i+j>j+1);j++){
            if(j<=n-1)
            for(int k = j+1; k<=n && i+j>k;k++){
                s = (i^(j^k));

                if(s==0){
                    c++;

                }

            }
        }
    }


    cout<<c<<endl;
}
