#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,t = 0,s=0,m=0;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++)
        cin>>a[i];

    for(int i = 0;i<n;i++){
        if(i!=0 && a[i]==a[i-1]+1){
            m = 1;
            s++;
        }
        else if(i==0)
            s=1;
        else{
            s = s-2;
            if(s>t)
                t = s;

            s = 1;
        }
    }

    if(s==n){
        s = s-1;
        t = s;
    }
    else{
        s--;
        s--;
        if(s>t){
            t = s;
        }
    }



    cout<<t<<endl;
}
