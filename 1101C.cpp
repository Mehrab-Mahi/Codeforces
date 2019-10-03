#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;



    int q,n,l,r;

    cin>>q;
    //int a[100005];

    while(q--){

    map<int,int>mp;
    vector<int>open,close,v;

        cin>>n;


        int check=0,xx=0;

        while(n--){
            cin>>l>>r;

            if(open.size()==0){

                open.pb(l);
                close.pb(r);
                mp[l]=1;
                mp[r]=1;
                v.pb(1);
            }
            else{
                    //cout<<"fds"<<" "<<n<<endl;;
                    int k = 0;
                for(int i = 0;i<open.size();i++){
                    //cout<<n<<endl;

                    if((l==open[i] || r==close[i] || l==close[i] || r == open[i]) || (l>open[i] && l<close[i]) || (r>open[i] && r<close[i])  || (l<open[i] && r>close[i])  ){
                    //cout<<"gfd"<<n<<endl;
                        if(mp[close[i]]==1){
                            //cout<<"   "<<l<<"   "<<r<<endl;
                            open.pb(l);
                            close.pb(r);
                            v.pb(1);
                            mp[l]=1;
                            mp[r]=1;
                            k++;
                            break;
                        }
                        else{
                            open.pb(l);
                            close.pb(r);
                            mp[l]=2;
                            mp[r]=2;
                            v.pb(2);
                            xx=2;
                            k++;
                            break;
                        }
                    }


                }
                    if(k==0){
                        open.pb(l);
                            close.pb(r);
                            mp[l]=2;
                            mp[r]=2;
                            v.pb(2);
                            xx=2;
                    }
            }



        }
        //cout<<"    "<<v.size()<<endl;
            if(xx==0){
                cout<<-1<<endl;
            }
            else{
                for(int i = 0;i<v.size();i++){
                    if(i!=v.size()-1){
                        cout<<v[i]<<" ";
                    }
                    else{
                        cout<<v[i]<<endl;
                    }
                }
            }



    }

}
