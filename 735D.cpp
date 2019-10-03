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

    if(n==2){
        cout<<1<<endl;
    }
    else if(n%2==0){
        cout<<2<<endl;
    }
    else{
        int m = 0;

        for(int i = 3;i<=(n/2)+1;i++){
            if(i!=1 && n%i==0){
                cout<<3<<endl;
                m = 1;
                break;
            }
        }
        if(m==0)
            cout<<1<<endl;
    }
}
