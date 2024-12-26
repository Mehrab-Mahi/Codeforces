#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n;

    cin>>t;

    while(t--){
        string s;

        cin>>n>>s;

        map<char,int>charCount;

        vector<char> charList;

        for(int i = 0; i < n; i++){
            if(charCount[s[i]] == 0){
                charCount[s[i]] = 1;
                charList.pb(s[i]);
            }
        }

        sort(charList.begin(), charList.end());

/*        for(int i = 0; i<charList.size(); i++){
            cout<<charList[i];
        } cout<<endl; */

        map<char,char> symmetricAlphabet;

        int lastPos = charList.size()-1;

        for(int i = 0; i<charList.size()/2 +1 ;i++){
            symmetricAlphabet[charList[i]] = charList[lastPos];
            symmetricAlphabet[charList[lastPos]] = charList[i];
            lastPos--;
        }

        for(int i = 0; i<n ; i++){
            cout<<symmetricAlphabet[s[i]];
        }
        cout<<endl;
    }
}

