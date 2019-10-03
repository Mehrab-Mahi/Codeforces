#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string  s;

    cin>>s;

    int n = s.size(),c=0;

    for(int i = 0;i<s.size();i++){
            int x = i;

        //cout<<s<<" "<<i<<endl;
        //cout<<i<<endl;
        if(s[i]==s[i+1] && i+1<s.size()){
            c++;
            s.erase(s.begin()+i+1);
            s.erase(s.begin()+i);
            i=i-2;

            if(i<0)
                i=-1;

        }

    }
    //cout<<c<<endl;
    if(c%2==1)
        cout<<"Yes\n";
    else
        cout<<"No\n";

}
