#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int a,p=0,n=0,m;

    cin>>a;

    for(int i =0;i<a;i++){
        cin>>m;

        if(m>=0)
            p = p+m;
        else
            n = n + m;

    }

    cout<<p-n<<endl;
}

