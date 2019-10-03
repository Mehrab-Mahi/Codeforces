#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,s1=0,s3=0;

    vector<ll>v;
    cin>>n;

    ll a[n];

    for(int i = 0 ; i<n ;i++){
        cin>>a[i];
        //s = s+a[i];
    }


    if(n==1){
        cout<<0<<endl;
    }
    else if(n==2){
        if(a[0]==a[1])
            cout<<a[0]<<endl;
        else
            cout<<0<<endl;
    }
    else if(n==3){
        if(a[0]==a[2])
            cout<<a[0]<<endl;
        else if((a[0]+a[1])==a[2])
            cout<<a[2]<<endl;
        else if(a[0]==(a[1]+a[2]))
            cout<<a[0]<<endl;
        else
            cout<<0<<endl;
    }
    else{


    ll x = 0,y=n-1,m=0,xx=1,yy=1;

    s1 = a[x];
    s3 = a[y];


    while(1){
        if(s1>s3){
            for(int i = y-1;i>0;i--){
                yy++;
                s3 = s3 + a[i];

                if(s3>=s1){
                    y = i;
                    break;
                }
            }
        }
        else if(s1<s3){
            for(int i = x+1;i<n-1;i++){

                    xx++;

                s1 = s1 + a[i];

                if(s1>=s3){
                    x = i;
                    break;
                }

            }
        }

        if(s1==s3){
            //cout<<s1<<endl;
            v.pb(s1);
           // cout<<xx<<" "<<yy<<endl;

            if((xx+yy+2)<=n){

            s1 = s1 + a[x+1];

            x++;
            xx++;

            s3 = s3 + a[y-1];
            y--;
            yy++;

            }
            else
                m = 1;
        }
        //cout<<xx<<" "<<yy<<endl;
        if((xx+yy>=n && v.size()==0) ||(v.size()==0 && m==1)){
            cout<<0<<endl;
            break;
        }
        else if((xx+yy>=n && v.size()>0) || (v.size()>0 && m==1)){

            if(s1==s3)
                v.pb(s1);

            ll l = v.size();

            sort(v.begin(),v.end());

            cout<<v[l-1]<<endl;
            //m = 1;
            break;
        }

        //cout<<m<<endl;
    }

    }

}

