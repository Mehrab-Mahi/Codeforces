#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,ans=0,c=0;

    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++)
        cin>>a[i];

    while(1){
        int m = 0;

        for(int i = 0;i<n;i++){
            if((a[i]-c)<=0){
                ans = i;
                m = 1;
                break;
            }
            c++;
        }
     if(m==1){
        cout<<ans+1<<endl;
        break;
     }

    }

}
