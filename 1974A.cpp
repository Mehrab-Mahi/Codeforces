#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,x,y;

    cin>>t;

    while(t--){

        cin>>x>>y;

        if(y==0 && x==0){
            cout<<0;
        }
        else if(y==0){
            if(x%15==0){
                cout<<x/15;
            }
            else{
                cout<<(x/15)+1;
            }
        }
        else if(x==0){
            if(y%2==0){
                cout<<y/2;
            }
            else{
                cout<<(y/2)+1;
            }
        }
        else{
            int neededForY = 0, remaining =0;
            if(y%2==0){
                neededForY = y/2;
                remaining = neededForY*7;
            }
            else{
                neededForY = y/2 + 1;
                remaining = (neededForY-1)*7 + 11;
            }

            if(remaining >= x){
                cout<<neededForY;
            }
            else{
                x = x - remaining;

                if(x%15==0){
                    cout<<neededForY + (x/15);
                }
                else{
                    cout<<neededForY + (x/15)+1;
                }
            }
        }
        cout<<endl;
    }
}
