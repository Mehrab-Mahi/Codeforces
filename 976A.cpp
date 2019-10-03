#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    string s;
    int n;

    cin>>n>>s;

    int c =0 ,l = s.size();

    for(int i = 0; i<l ;i++){
        if(s[i]=='1')
            c++;
    }

    if(c!=0){
        cout<<1;

        for(int i = 0;i<(l-c);i++)
            cout<<0;

        cout<<endl;
    }
    else
        cout<<0<<endl;
}
