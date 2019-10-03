#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int l=0,r=0,a=0,m;

    cin>>l>>r>>a;


        if(l>r){
            m = l-r;

            if(a>m){
                m = a-m;

                cout<<(2*l)+((m/2)*2)<<endl;
            }
            else{
                r = r + a;

                cout<<2*r<<endl;
            }
        }
        else if(l==r){
            cout<<(2*l)+((a/2)*2);
        }
        else{
            m = r - l;

            if(a>m){
                m = a - m;

                cout<<(2*r)+((m/2)*2)<<endl;
            }
            else{
                l = l + a;
                cout<<(2*l)<<endl;
            }
        }

}

