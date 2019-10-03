#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,p=0,mx=0,m=0,pos;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i = n-1;i>=0;i--){

        pos = i;
        mx = a[i];
        //cout<<i<<"  "<<mx<<endl;
        if(a[i]!=0){

            if(i!=0){
                p++;
                a[i] = 0;
                while(1){
                    m = 0;
                if(pos!=0){
                for(int j = pos-1;j>=0;j--){
                    if(mx>a[j] && a[j]!=0){
                        m = 1;
                        pos = j;
                        mx = a[j];
                        a[j] = 0;

                    }
                }
                }
                if(m==0)
                    break;
                }
            }
            else
                p++;
        }
    }

    cout<<p<<endl;

}
