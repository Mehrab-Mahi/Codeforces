#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,u = 0,r = 0,c = 0,uu = 0;

    string s;

    cin>>n>>s;

    if(s[0]=='U')
        uu = 1;
    else
        uu = 0;

    for(int i = 0;i<n;i++){
        if(s[i]=='U')
            u++;
        else
            r++;

        if(uu==0){
            if(u>r){
                c++;
                uu = 1;
            }
        }
        else{
            if(r>u){
                c++;
                uu = 0;
            }
        }

    }

    cout<<c<<endl;

}

