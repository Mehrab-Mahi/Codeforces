#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int w,h,s1w,s1h,s2w,s2h,x;

    cin>>w>>h>>s1w>>s1h>>s2w>>s2h;
    x=w;

    for(int i = h;i>0;i--){
        //cout<<x<<"    "<<i<<endl;
        x+=i;
        if(i==s1h){

            x = x - s1w;


        }

        if(i==s2h){
            x=x-s2w;

        }

        if(x<=0){
           x=0;
        }
    }


    cout<<x<<endl;


}
