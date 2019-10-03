#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

bool fuck(int n)
{
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    optimize;
    map<int,int>mp;
    int n,m,c=0;
    ll d;
    cin>>n;
    int a[n];
    for(int i = 0 ; i< n ;i++){
        cin>>a[i];
    }

    //sort(a,a+n);

    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    else if(n==2){
        if(fuck(a[0]+a[1]))
            cout<<0<<endl;
        else
            cout<<2<<endl;

        return 0;
    }

    for(int i = 0;i<n;i++){
            m = 0;
        if(mp[a[i]]!=1 && i<n-1){
            for(int j = i+1;j<n;j++){
                d = a[i] + a[j];
                //cout<<a[i]<<" "<<a[j]<<endl;
                if(fuck(d)){
                    m = 1;
                    mp[a[i]] = 1;
                    mp[a[j]] = 1;
                    //cout<<a[i]<<" "<<a[j]<<endl;
                    break;
                }
            }

            if(m==0){
                //cout<<a[i]<<endl;
                c++;
            }
        }
        else if(i==n-1 && mp[a[i]]!=1){
                 m=0;
            for(int j = i-1;j>=0;j--){
                if(fuck(a[i]+a[j]))
                    {
                        m = 1;
                        break;
                    }
            }

            if(m==0)
                c++;
        }
    }

    cout<<c<<endl;
}
