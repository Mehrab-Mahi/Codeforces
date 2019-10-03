#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k,pos = 0;

    string s;

    cin>>n>>k>>s;

    if(k==0){
        cout<<s<<endl;
        return 0;
    }

    if(n==1){
        cout<<0<<endl;
        return 0;
    }

    for(int i = 0;i<s.size();i++){

        if(s[i]!='1' && i==0){
            s[i] = '1';
            pos++;
        }
        else if(i!=0 && s[i]!='0'){
            s[i] = '0';
            pos++;
        }

        if(pos==k)
            break;
    }

    cout<<s<<endl;

}
