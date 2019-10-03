#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s,t;
    int c = 0;
    cin>>s>>t;

     if(s.size()<t.size())
        swap(s,t);

    int m = s.size();
    int n = t.size();

    m--;
    n--;
    while(1){
        if((s[m]!=t[n])){
            c=m+n+2;
            break;
        }


        if(n==0 || m==0){
            c = c + m;
            break;
        }
        m--;
        n--;
    }

    cout<<c<<endl;
}
