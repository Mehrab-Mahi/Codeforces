#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n;
    string s;

    cin>>n>>s;

    vector<int>v;

    for(int i = 1;i<(n/2)+1;i++){
        if(n%i==0)
            v.pb(i);
    }

        v.pb(n);

    sort(v.begin(),v.end());

    int l = v.size();

    for(int i = 0 ;i<l;i++){
        int a = v[i];

        reverse(s.begin(),s.begin()+a);
        //cout<<s<<endl;
    }
    cout<<s<<endl;
}
