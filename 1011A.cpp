#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    vector<int>v;

    string s;

    int n , k , p =0 ,a,w = 0;

    cin>>n>>k;

    cin>>s;

    for(int i = 0 ; i<n ; i++){
        a = s[i]-96;
        v.pb(a);
    }

    sort(v.begin(),v.end());

    a = v[0];
    p = 1;
    w = v[0];
    if(p==k){
        cout<<w<<endl;
        return 0;
    }
    else if(n>1){
        for(int i = 1;i<n;i++){
            if(v[i]!=a && v[i]!=a+1){
                a = v[i];
                w = w + v[i];
                p++;
            }

            if(p==k){
                cout<<w<<endl;
                return 0;
            }
        }

        cout<<-1<<endl;
    }
    else{
        cout<<-1<<endl;
        return 0;
    }

}

