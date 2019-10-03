#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int q,l,r;

    cin>>q;

    while(q--){
        cin>>l>>r;

        if(l==r){
            if(l%2==0)
                cout<<l<<endl;
            else
                cout<<l*(-1)<<endl;
        }
        else{
            int s=0;
            if(l%2==0){
                s = s+l;
                l++;
            }

            if(r%2==1){
                s = s + r*-1;
                r--;
            }

            if(r>l)
                s = s + (r-l+1)/2;


            cout<<s<<endl;

        }
    }

}
