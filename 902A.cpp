#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,p=0;

    cin>>n>>m;

    int a,b,c;

    cin>>a>>b;

    c=b;

    if(n==1)
    {
        if(m<=b && a==0){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else{
    for(int i=1;i<n;i++)
    {
        cin>>a>>b;

        if(a<=c){
           c = max(c,b);
        }

        else{
            p = 1;
            cout<<"NO"<<endl;
            break;
        }
    }

    if(p==0 && n>1 && c>=m)
        cout<<"YES"<<endl;
    else if(c<m && p==0)
        cout<<"NO"<<endl;
    }



}
