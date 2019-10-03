#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;
    int c = 0;

    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1')
            c++;
    }

    if(s.size()==1 && s[0]=='0'){
        cout<<0<<endl;
    }
    else if(s.size()%2==1 && c>1){
        cout<<s.size()/2 + 1 <<endl;
    }
    else{
        cout<<s.size()/2 <<endl;
    }

}
