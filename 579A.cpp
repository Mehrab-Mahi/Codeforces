#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int n,a=1,t=0,s;
    cin>>n;

    vector<int>v;
    v.pb(a);

    while(1){
        a = a*2;

        v.pb(a);

        if(a>=n)
            break;
    }
    s = n;
    while(1){
        for(int i = 0;i<v.size();i++){
            if(v[i]==s){
                s = s-v[i];
                t++;
                break;
            }
            else if(v[i]>s){
                s = s - v[i-1];
                t++;
                break;
            }
        }

        if(s==0)
            break;
    }

    cout<<t<<endl;
}

