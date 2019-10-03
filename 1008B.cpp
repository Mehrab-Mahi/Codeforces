#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;

    cin>>n;

    int h[n],w[n];


    for(int i = 0 ;i <n ;i++)
        cin>>w[i]>>h[i];

    if(h[0]<w[0])
        swap(h[0],w[0]);

    for(int i = 0 ; i<n-1 ; i++){
        if(h[i]<h[i+1]){
            if(w[i+1]>h[i]){
                cout<<"NO\n";
                return 0;
            }
            else
                swap(w[i+1],h[i+1]);
        }
        else{
            if(w[i+1]>h[i+1] && w[i+1]<=h[i])
                swap(w[i+1],h[i+1]);
        }
    }

    //cout<<h[0]<<h[1]<<h[2]<<endl;

    cout<<"YES\n";

}

