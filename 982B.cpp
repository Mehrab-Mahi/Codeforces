#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int a[2][200005];

int main()
{
    optimize;
    //vector<int>v;
    set<int>st;
    set<int> :: iterator it;
    int n;

    map<int,int>mp;

    cin>>n;

    int b[n],l=0;

    for(int i = 0;i<n;i++){
        cin>>b[i];

        mp[b[i]] = i+1;
    }

    //cout<<mp[1]<<" "<<mp[3]<<endl;

    sort(b,b+n);
    string s;

    cin>>s;
    int in = 0;
    for(int i = 0;i<2*n;i++){
        if(s[i]=='0'){
                in++;
            cout<<mp[b[in-1]]<<" ";
            st.insert(b[in-1]);
            //v.pb(b[in-1]);
        }
        else{
            l = st.size();
            it = st.end();
            it--;
            //sort(v.begin(),v.end());
            //cout<<"l  ---  "<<v[l-1]<<endl;
            cout<<mp[*it]<<" ";
            st.erase(it);
            //v.erase(v.begin()+(l-1));
        }
    }
    cout<<endl;

}
