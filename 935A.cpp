#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a , b  , c;

    cin>>a;

    c = a;

    int l = a.size();

    reverse(c.begin(),c.end());
    int m = 0;
    for(int i = 0;i<l;i++){
        if(a[i]!=c[i]){
            m = 1;
            break;
        }
    }

    if(m==0){
        cout<<a<<endl;
    }
    else{

        cout<<a+c<<endl;
    }

}
