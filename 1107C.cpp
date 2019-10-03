#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,k;

    cin>>n>>k;

    ll sum=0;

    int a[n];

    for(int i = 0 ; i< n ;i++)
        cin>>a[i];

    string s;

    cin>>s;
    int l = s.size();

    for(int i = 0;i<l;i++){

        char c;
        int cnt=0;
        vector<int>v;

        if(i+1<l && s[i]==s[i+1]){
            ll ss=0;
            char c = s[i];
            int point;
            for(int j = i;j<l;j++){
                if(s[j]==c){
                    cnt++;
                    v.pb(a[j]);
                    ss+=a[j];
                    point=j;
                }
                else{
                    i = j-1;
                    break;
                }
            }

            //cout<<"    "<<cnt<<endl;

            //for(int x = 0 ; x<v.size();x++){
             //   cout<<"   "<<v[x]<<endl;
            //}

            if(cnt<=k){
                sum+=ss;
                i = point;
            }
            else{
                sort(v.begin(),v.end());

                for(int j = 0;j<cnt-k;j++){
                    ss-=v[j];
                    //cout<<"     "<<v[j]<<endl;
                }

                sum+=ss;
                i=point;
            }
        }
        else{
            sum+=a[i];
            //cout<<"    "<<a[i]<<endl;
        }

    }

    cout<<sum<<endl;

}
