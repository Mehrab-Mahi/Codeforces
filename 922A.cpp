#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x , y;

    cin>>x>>y;

    if(x==y-1)
        cout<<"Yes"<<endl;
    else if(x<y-1)
        cout<<"No"<<endl;
    else{
        int s = 0;

        s = x - (y-1);

        if(y-1<1)
            cout<<"No"<<endl;
        else{

        if(s%2==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        }
    }
}
