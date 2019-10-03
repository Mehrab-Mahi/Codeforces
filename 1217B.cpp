#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back
#define mx 1000000007
using namespace std;

int main()
{
    optimize;

    int n,x,d,h,y,xx,dif;

    int t;

    cin>>t;

    while(t--){
        cin>>n>>x;

        d = mx,h=mx,dif = -1;
        for(int i = 0;i<n;i++){
            cin>>xx>>y;

            if(xx>y){
                if(xx-y>dif){
                    d = xx;
                    h = y;
                    dif = xx-y;
                }
                else if(xx-y==dif){
                    if(xx>d){
                        d = xx;
                        h = y;
                    }
                }
            }
        }

        if(dif==-1){
            cout<<-1<<endl;
        }
        else{
            int ans = 0;
            while(1){
                //cout<<" "<<x<<endl;
                if(d>=x){
                    ans++;
                    x=0;
                }
                else{
                    ans+=(x/d);
                    //cout<<" "<<ans<<endl;
                    x = (x%d)+((x/d)* h);
                }

                if(x==0)
                    break;
            }

            cout<<ans<<endl;
        }
    }

}
