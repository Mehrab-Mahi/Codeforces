#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int nn[1001];

int main()
{
    optimize;

    int n,m,q,a,b;

    string s,t;

    cin>>n>>m>>q;

    cin>>s>>t;

    int M = 0,c=0,x=0;
    for(int i = 0;i<n;i++){
        if(s[i]==t[0]){
                            //cout<<"     "<<i<<endl;
            c = 0;
            for(int j = i;j<i+m && (i+m)<=n;j++){
                if(s[j]==t[c]){
                    if(c==m-1){
                        x = j;
                        M++;
                        //cout<<"       "<<j<<endl;
                        break;
                    }
                }
                else
                    break;
                        c++;
                        //cout<<j<<"  "<<c<<endl;
                    }
                    //cout<<endl;
                }

                nn[x] = M;
                //cout<<x<<" "<<M<<endl;
            }



   /* for(int i = 0; i<n;i++){
        //cout<<i+1<<"     "<<nn[i]<<endl;
        //nn[i] = nn[i] + nn[i-1];
    } */
    //cout<<nn[4]<<endl;
    while(q--){
        cin>>a>>b;

        if((abs(b-a)+1)<m){
            cout<<0<<endl;
        }
        else{
           cout<<abs(nn[b-1]-nn[a-1])<<endl;
        }
    }

}

