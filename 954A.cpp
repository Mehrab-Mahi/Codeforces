#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,c=0,m=0;

    string s;

    cin>>n>>s;

    for(int i = 0;i<n;i++){
            m = 0;
        if((i+1<n && s[i]=='U' && s[i+1]=='R') || (i+1<n && s[i]=='R' && s[i+1]=='U')){
            m=1;
           // cout<<i<<" "<<i+1<<endl;
            c++;
            i = i + 1;
        }
        else{
            m=0;
            c++;
        }


    }

    cout<<c<<endl;

}

