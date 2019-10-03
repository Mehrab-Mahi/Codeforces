#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;
string s;
int check(int pos,int ss,int n){
    if(pos>=n)
        return -1;
    int z = 0;
    for(int i=pos;i<n;i++){
       z = z + (s[i]-48);
       if(z==ss){
        for(int k=i+1;i<n;k++){
            if(z+(s[k]-48)!=ss)
                return k-1;
            if(k==n-1 && z+(s[k]-48)==ss){
                return k;
            }
        }

       }
       if(z>ss)
        return -1;
    }

    return -1;
}

int main()
{
    optimize;

    int n;


    cin>>n>>s;

    int x=0,y=0,z=0;


        for(int i = 0;i<n-1;i++){
            x = x + (s[i]-48);
            y = 0;
            int pos = i+1;
            while(1){
                int k =check(pos,x,n);

                if(k==-1)
                    break;
                else if(k==n-1){
                    cout<<"YES\n";
                    return 0;
                }
                else{
                    pos = k+1;
                }

            }
        }

        cout<<"NO\n";

}
