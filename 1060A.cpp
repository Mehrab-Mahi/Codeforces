#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,c = 0;

    cin>>n;

    int ss = n/11;


    string s;

    cin>>s;

    for(int i = 0;i<n;i++){
        if(s[i]=='8')
            c++;
    }

    if(c>=ss)
        cout<<ss<<endl;
    else
        cout<<c<<endl;

}
