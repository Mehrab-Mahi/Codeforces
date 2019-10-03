#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,s,i,ex;;

    cin>>t;

    while(t--){
        cin>>s>>i>>ex;

        if(s<i){
            if(s+ex<=i){
                cout<<0<<endl;
            }
            else{
                ex-=(i-s);
                s+=(i-s);

                if(ex%2==0){
                    cout<<ex/2<<endl;
                }
                else{
                    cout<<(ex/2)+1<<endl;
                }


            }
        }
        else if(s==i){
            if(ex==0){
                cout<<0<<endl;
            }
            else if(ex%2==0){
                cout<<ex/2<<endl;
            }
            else{
                cout<<(ex/2)+1<<endl;
            }
        }
        else{
            int d = s-i,ans=0;

            if(ex==0){
                cout<<1<<endl;
            }
            else if(d>ex){
                cout<<ex+1<<endl;
            }
            else if(d==ex){
                cout<<ex<<endl;
            }
            else{
                if(ex>2*d){
                    cout<<(ex/2)+1<<endl;
                }
                else{
                    s+=ex;
                    while(1){
                        ans++;
                        s--;
                        i++;

                        if(s<=i)
                            break;
                    }

                    cout<<ans<<endl;
                }
            }
        }
    }

}
