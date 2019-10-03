#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,c = 0,q = 1,s;

    cin>>n;

    for(int i = 0;i<n/2+1;i++){
        s = n-q;

        if(s%q==0 && s!=0){
            c++;
        }
        q++;
    }

    cout<<c<<endl;
}

