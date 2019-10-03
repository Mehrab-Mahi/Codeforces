#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;

    cin>>s;

    int l = s.size();

    for(int i = 0;i<l-1;i++){
        if(s[i]=='1' && s[i+1]=='0'){
                swap(s[i],s[i+1]);
        }
        else if(s[i]=='2' && s[i+1]=='1'){
            swap(s[i],s[i+1]);
        }
    }

    cout<<s<<endl;

}

