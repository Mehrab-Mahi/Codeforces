#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n;
    string s;

    cin>>n>>s;

    if(n%2==1){
        cout<<"No"<<endl;
    }
    else{
        int x = 0,t=0,mn=n;

        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                x++;
            }
            else{
                x--;
                //cout<<i<<" "<<s[i]<<x<<endl;
            }
            //cout<<x<<endl;
            if(x<0 && x<mn){
                mn = x;
            }
        }

        if(mn>=-1 && x==0){
                //cout<<mn<<endl;
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}
