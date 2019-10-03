#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s[6],t;
    s[0] = "purple";
    s[1] = "green";
    s[2] = "blue";
    s[3] = "orange";
    s[4] = "red";
    s[5] = "yellow";

    map<string,string>mp;

    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul" ;
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";

    int n ;

    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>t;

        for(int j = 0; j<6 ;j++){
            if(s[j]==t)
                s[j]="a";
        }
    }

    cout<<6-n<<endl;

    for(int i = 0;i<6;i++){
        if(s[i]!="a")
            cout<<mp[s[i]]<<endl;
    }
}
