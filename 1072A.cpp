#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int w,h,k,s=0,x,y;

    cin>>w>>h>>k;

    for(int i = 1;i<=k;i++){
        x = w - 4*(i-1);
        y = h - 4*(i-1);
        s = s+x*2 + y*2 - 4;
        //cout<<w<<" "<<h<<" "<<s<<endl;


    }

    cout<<s<<endl;

}
